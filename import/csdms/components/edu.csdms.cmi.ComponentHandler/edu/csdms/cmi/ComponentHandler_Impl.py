#
# File:          ComponentHandler_Impl.py
# Symbol:        edu.csdms.cmi.ComponentHandler-v0.0
# Symbol Type:   class
# Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
# Description:   Implementation of sidl class edu.csdms.cmi.ComponentHandler in Python.
# 
# WARNING: Automatically generated; changes will be lost
# 
#


# DO-NOT-DELETE splicer.begin(_initial)
# Insert-Code-Here {_initial} ()
import sys
try:
    print 'Importing CMT modules...'
    import cmt.status
    import numpy as np
except Exception as e:
    print 'ERROR: Unable to import: %s' % e
    print 'This was my search path'
    for path in sys.path:
        print '%s' % path
else:
    print 'Imported.'

# DO-NOT-DELETE splicer.end(_initial)

import edu.csdms.cmi.ComponentHandler
import edu.csdms.cmi.IComponentHandler
import edu.csdms.ports.CMIPort
import edu.csdms.tools.CMIConfigFile
import edu.csdms.tools.CMIPortQueue
import edu.csdms.tools.ConfigDialog
import edu.csdms.tools.PrintQueue
import edu.csdms.tools.TemplateFiles
import edu.csdms.tools.Verbose
import gov.cca.Services
import gov.cca.Type
import gov.cca.TypeMap
import gov.cca.ports.ParameterPortFactory
import sidl.BaseClass
import sidl.BaseInterface
import sidl.ClassInfo
import sidl.RuntimeException
import sidl.NotImplementedException

# DO-NOT-DELETE splicer.begin(_before_type)
import sys
# DO-NOT-DELETE splicer.end(_before_type)

class ComponentHandler:

# All calls to sidl methods should use __IORself

# Normal Babel creation pases in an IORself. If IORself == None
# that means this Impl class is being constructed for native delegation
  def __init__(self, IORself = None):
    if (IORself == None):
      self.__IORself = edu.csdms.cmi.ComponentHandler.ComponentHandler(impl = \
        self)
    else:
      self.__IORself = IORself
# DO-NOT-DELETE splicer.begin(__init__)

    # Put your code here...

    try:
        print 'Creating ComponentHandler instance'

        # A gov.cca.TypeMap that holds input from the config dialog
        self.userinput = None

        # Is this component acting as the driver
        self.is_driver = False
    
        # Current status of the component
        self.status = cmt.status.CREATED

        # Messaging logging for the component
        print 'Creating logger'
        try:
            self.log = edu.csdms.tools.Verbose.Verbose ()
            self.log.initialize ('ComponentHandler:Unnamed', 20)
        except Exception as e:
            print 'Unexpected error creating logger (%s)' % e
        else:
            print 'Created logger'

        self.log.info ('Creating')
        # Component's config file
        self.log.info ('Creating ConfigFile')
        try:
            self.cfg_file = edu.csdms.tools.CMIConfigFile.CMIConfigFile ()
        except Exception as e:
            self.log.error ('Unexpected error creating ConfigFile (%s)' % e)
        else:
            self.log.info ('Created ConfigFile')
        
        # Queue of component's uses ports
        self.log.info ('Creating PortQueue')
        try:
            self.port_queue = edu.csdms.tools.CMIPortQueue.CMIPortQueue ()
        except Exception as e:
            self.log.error ('Unexpected error creating PortQueue (%s)' % e)
        else:
            self.log.info ('Created PortQueue')

        # Queue of component's print variables 
        self.log.info ('Creating PrintQueue')
        try:
            self.print_queue = edu.csdms.tools.PrintQueue.PrintQueue ()
        except Exception as e:
            self.log.error ('Unexpected error creating PrintQueue (%s)' % e)
        else:
            self.log.info ('Created PrintQueue')

        # The name of the client
        self.name = 'Unknown'

        # The CMIPort being handled
        self.client = None

        # The CCA services associated with the client
        self.services = None

        self.status = cmt.status.CREATED
        self.log.info ('Created')
    except Exception as e:
        print 'ERROR: Unexpected exception creating ComponentHandler: %s' % e

    # Bocca generated code. bocca.protected.begin(edu.csdms.cmi.ComponentHandler._init) 
    self.bocca_print_errs = True
    # Bocca generated code. bocca.protected.end(edu.csdms.cmi.ComponentHandler._init) 

# DO-NOT-DELETE splicer.end(__init__)

# Returns the IORself (client stub) of the Impl, mainly for use
# with native delegation
  def _getStub(self):
    return self.__IORself

  def set_up(self, name, port, services):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string name
    # edu.csdms.ports.CMIPort port
    # gov.cca.Services services
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(set_up)
    print 'Creating logger'

    try:
        self.log = edu.csdms.tools.Verbose.Verbose ()
        self.log.initialize ('ComponentHandler:%s' % name, 20)
    except Exception as e:
        print 'Unexpected error creating logger (%s)' % e
    else:
        print 'Created logger'

    self.log.info ("Setting up component handler")

    self.name = name
    self.client = port
    self.services = services

    self.log.info ("Get user input")
    try:
        self.userinput = self.services.createTypeMap ()
    except Exception as e:
        self.log.error ('Unexpected error creating TypeMap (%s)' % e)
    self.log.info ("Got user input")

    self.log.info ("Reading config file")
    try:
        self.cfg_file.read (name)
    except Exception as e:
        self.log.error ('Unexpected error reading config file (%s)' % e)
    self.log.info ("Read config file")
    
    self.log.info ("Getting PPF port")
    try:
        gcp = services.getPort ("ppf")
        if gcp is None:
            self.log.error ("gcp is None")
    except Exception as e:
        self.log.error ("Unexpected error getting PPF port (%s)" % e)
    else:
        self.log.info ("Got PPF port")

    self.log.info ("Casting PPF port")
    try:
        ppf = gov.cca.ports.ParameterPortFactory.ParameterPortFactory (gcp)
        if ppf is None:
            self.log.error ("ppf is None")
    except Exception as e:
        self.log.error ("Unexpected error casting PPF port (%s)" % e)
    else:
        self.log.info ("Cast PPF port")

    ppf.initParameterData (self.userinput, "Configure")

    #sim_name = self.userinput.getString ("/%s/Input/Var/SimulationName" % self.name, "???")
    #self.log.info ('SimulationName is %s' % sim_name)

    ppf.setBatchTitle (self.userinput, "%s Parameters" % name)

    dialog = edu.csdms.tools.ConfigDialog.ConfigDialog ()
    file = self.cfg_file.get_string ("CMI_CONFIG_DIALOG_XML_FILE")
    self.dialog_file = dialog.read (file)
    #sim_name = self.userinput.getString ("/%s/Input/Var/SimulationName" % self.name, "???")
    #self.log.info ('SimulationName is %s' % sim_name)

    try:
        self._port_queue_dt = self.cfg_file.get_float ("CMI_PORT_QUEUE_DT")
    except ValueError:
        self._port_queue_dt = 1.
    except Exception as e:
        self.log.error ('Unable to get port queue de (%s)' % e)

    self.log.info ('Construct dialog')
    try:
        dialog.construct (ppf, self.userinput)
        #sim_name = self.userinput.getString ("/%s/Input/Var/SimulationName" % self.name, "???")
        #self.log.info ('SimulationName is %s' % sim_name)
    except Exception as e:
        self.log.error ("Unable to construct dialog (%s)" % e)
    else:
        self.log.info ('Constructed dialog')

    ppf.addParameterPort (self.userinput, services)
    services.releasePort ("ppf")

    self.log.info ("Set up component handler")
# DO-NOT-DELETE splicer.end(set_up)

  def boccaForceUsePortInclude(self, dummy0, dummy1, dummy2, dummy3, dummy4,  \
    dummy5, dummy6, dummy7, dummy8, dummy9):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # edu.csdms.tools.TemplateFiles dummy0
    # edu.csdms.tools.CMIConfigFile dummy1
    # edu.csdms.tools.Verbose dummy2
    # gov.cca.Type dummy3
    # gov.cca.TypeMap dummy4
    # edu.csdms.tools.PrintQueue dummy5
    # edu.csdms.tools.ConfigDialog dummy6
    # edu.csdms.tools.CMIPortQueue dummy7
    # edu.csdms.ports.CMIPort dummy8
    # gov.cca.ports.ParameterPortFactory dummy9
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

    """\
 This function should never be called, but helps babel generate better code. 
"""
# DO-NOT-DELETE splicer.begin(boccaForceUsePortInclude)
    # DO-NOT-EDIT-BOCCA
    # Bocca generated code. bocca.protected.begin(boccaForceUsePortInclude)
    o0 = dummy0
    o1 = dummy1
    o2 = dummy2
    o3 = dummy3
    o4 = dummy4
    o5 = dummy5
    o6 = dummy6
    o7 = dummy7
    o8 = dummy8
    o9 = dummy9
    return
    # Bocca generated code. bocca.protected.end(boccaForceUsePortInclude)
# DO-NOT-DELETE splicer.end(boccaForceUsePortInclude)

  def go(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # bool _return
    #

# DO-NOT-DELETE splicer.begin(go)
    self.log.info ('Go')
    try:
        self.init_component (None)
        self.run_component (-1.)
        self.finalize_component ()
    except Exception as e:
        self.log.error ('Unexpected error running go (%s)' % e)
    self.log.info ('Stop')
# DO-NOT-DELETE splicer.end(go)

  def init_component(self, config_file):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string config_file
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # bool _return
    #

# DO-NOT-DELETE splicer.begin(init_component)
    self.log.info ("Initializing")
    if self.status >= cmt.status.INITIALIZING:
        return True
    else:
        self.status = cmt.status.INITIALIZING

    self.log.info ("Create port queue")
    try:
        ports = self.cfg_file.get_array ("CMI_PORT_NAMES")
        opt_ports = self.cfg_file.get_array ("CMI_OPTIONAL_PORT_NAMES")
        self.port_queue.initialize (self.services, self.client)
        self.port_queue.add_ports (ports)
        self.port_queue.add_optional_ports (opt_ports)
        self.port_queue.connect_all_ports ()
    except Exception as e:
        self.log.error ('Unexpected error configuring PortQueue (%s)' % e)
    else:
        self.log.info ("Created port queue")

    self.log.info ("Setting simulation name")
    try:
        sim_name = self.userinput.getString ("/%s/Input/Var/SimulationName" % self.name, self.name)
        self.userinput.putString ("/%s/SimulationName" % self.name, sim_name)
    except Exception as e:
        self.log.error ('Unexpected error setting name (%s)' % e)
    else:
        self.log.info ("Set simulation name (%s)" % sim_name)

    self.log.info ("Reading parameters")
    try:
        srcs = self.cfg_file.get_array ("CMI_TEMPLATE_SOURCE_FILES")
        dsts = self.cfg_file.get_array ("CMI_TEMPLATE_DEST_FILES")
        templates = edu.csdms.tools.TemplateFiles.TemplateFiles ()
        templates.add_files (srcs, dsts)
        templates.substitute (self.userinput, "/%s/Input/Var/" % self.name, ".",
                              self.dialog_file)
    except Exception as e:
        self.log.error ('Unexpected error reading parameters (%s)' % e)
    else:
        self.log.info ("Read parameters")

    self.log.info ("Initialize client")
    try:
        arg = self.cfg_file.get_string ("CMI_INITIALIZE_ARG")
        self.log.debug ("Using arg=%s" % arg)

        self.client.prepare (arg)
        #self.client.CMI_initialize (arg)
        #self.client.CMI_initialize ("%s_command_line.txt" % self.name)
    except Exception as e:
        self.log.error ('Unexpected error initializing client (%s)' % e)
    else:
        self.log.info ("Initialized client")

    self.log.info ("Create PrintQueue")
    try:
        output_ns = self.cfg_file.get_string ("CMI_OUTPUT_FILE_NS")
        self.log.info ("namespace = %s" % output_ns)
        self.print_queue.initialize (self.userinput, "/%s/" % self.name, self.client)
        self.log.info ("adding files")
        self.print_queue.add_files_from_list (output_ns)
    except Exception as e:
        self.log.error ('Unexpected error adding file to PrintQueue (%s)' % e)
    else:
        self.log.info ("Created PrintQueue")

    self.log.info ("Initializing ports")
    try:
        self.port_queue.initialize_all_ports (None)
    except Exception as e:
        self.log.error ('Unexpected error initializing ports (%s)' % e)
    else:
        self.log.info ("Initialized ports")

    self.log.info ("Creating mappers")
    try:
        mappers = self.cfg_file.get_array ("CMI_MAPPERS")
        self.port_queue.add_mappers (mappers)
    except Exception as e:
        self.log.error ('Unexpected error creating mappers (%s)' % e)
    else:
        self.log.info ("Created mappers")

    try:
        self.log.info ("Running initialize ports")
        init_ports = self.cfg_file.get_array ('CMI_INIT_PORTS')
        self.log.info ("Found init ports: .%s." % ','.join (init_ports))
        #self.port_queue.run_ports (init_ports, 0.)
        #self.log.info ("Running mappers for init ports")
        self.port_queue.run_mappers_for_ports (init_ports)
        self.log.info ("Disabling initialize ports")
        self.port_queue.disable_ports (init_ports)
    except Exception as e:
        self.log.error ('Unexpected error running init ports(%s)' % e)
    else:
        self.log.info ("Ran initialize ports")

    if self.port_queue.get_active_port_count () == 0:
        self.log.info ('Running as standalone component')
        self._port_queue_dt = sys.float_info.max
    else:
        self.log.info ('Running with %d uses ports' %
                       self.port_queue.get_active_port_count ())

    self.status = cmt.status.INITIALIZED
    self.log.info ('Initialized')

    return True
# DO-NOT-DELETE splicer.end(init_component)

  def run_component(self, time_interval):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # double time_interval
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # bool _return
    #

# DO-NOT-DELETE splicer.begin(run_component)
    self.log.info ('Updating...')
    self.log.info (str (self.status))

    if self.status == cmt.status.UPDATING:
        return True
    else:
        self.status = cmt.status.UPDATING

    if time_interval<0:
        time_interval = self.client.CMI_get_end_time ()

    try:
        #print_time = self.print_queue.next_print_time ()
        #now = self.client.CMI_get_current_time ()

        #self.log.info ('Current time is %f' % now)
        #self.log.info ('Print time is %f' % print_time)
        #self.print_queue.print_all (now)
        #self.log.info ('Print time is now %f' % print_time)

        ##if np.abs (now-print_time) < 1e-6:
        ##    self.print_queue.print_all (print_time)

        print_time = self.print_queue.next_print_time ()
        now = self.client.CMI_get_current_time ()
        #if print_time>now and print_time<time_interval:

        while print_time>now and print_time<time_interval:
            self.log.info ('Updating until next print time (%f)' % print_time)
            self.status = cmt.status.UPDATED

            self.run_component (print_time)

            print_time = self.print_queue.next_print_time ()
            now = self.client.CMI_get_current_time ()

        #self.log.info ('Looking for next print time (%f)' % print_time)
        #while print_time>now and print_time<time_interval:
        #    self.status = cmt.status.UPDATED
        #    self.log.info ('Updating until next print time (%f)' % print_time)
        #    self.run_component (print_time)
        #    self.print_queue.print_all (print_time)
        #    print_time = self.print_queue.next_print_time ()
    except Exception as e:
        self.log.error ('Unexpected error running print queue (%s)' % e)
    else:
        self.log.info ("Ran print queue")

    self.log.info ("Updating ports until %f" % time_interval)
    try:
        now = self.client.CMI_get_current_time ()
        #port_queue_dt = 1.
        port_queue_dt = self._port_queue_dt

        times = np.arange (now, time_interval, port_queue_dt) + port_queue_dt
        try:
            times[-1] = time_interval
        except IndexError:
            times = [time_interval]
        #t = now + port_queue_dt
        #for t in np.arange (now+port_queue_dt, time_interval, port_queue_dt):
        self.log.info ("Running for these times %s" % times)
        for t in times:
            self.log.info ("Running unitl %f" % t)
            self.port_queue.run_all_ports (now)
            self.port_queue.run_all_mappers ()

            #self.client.CMI_run (t)
            self.client.run (t)

            now = self.client.CMI_get_current_time ()
    except Exception as e:
        self.log.error ('Unexpected error running ports (%s)' % e)
    else:
        self.log.info ("Updated ports to %f" % now)

    #self.log.info ("Updating ports")
    #try:
    #    if t>time_interval:
    #        self.port_queue.run_all_ports (now)
    #        self.port_queue.run_all_mappers ()
    #        self.client.CMI_run (time_interval)
    #except Exception as e:
    #    self.log.error ('Unexpected error running ports (%s)' % e)
    #else:
    #    self.log.info ("Updated ports")

    try:
        self.log.info ('Printing (%f)' % time_interval)
        self.print_queue.print_all (time_interval)
    except Exception as e:
        self.log.error ('Unexpected error running print queue (%s)' % e)
    else:
        self.log.info ("Ran print queue")

    self.log.info ('Updated.')
    self.status = cmt.status.UPDATED

    return True
# DO-NOT-DELETE splicer.end(run_component)

  def finalize_component(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # bool _return
    #

# DO-NOT-DELETE splicer.begin(finalize_component)
    self.status = cmt.status.FINALIZING

    self.log.info ('Finalizing...')
    try:
        self.client.finish ()
        #self.client.CMI_finalize ()
        self.port_queue.finalize_all_ports ()
        self.print_queue.close ()
        self.is_driver = False
    except Exception as e:
        self.log.error ('Unexpected error finalizing (%s)' % e)
    finally:
        self.status = cmt.status.FINALIZED
        self.log.info ('Finalized')

    return True
# DO-NOT-DELETE splicer.end(finalize_component)

# DO-NOT-DELETE splicer.begin(_final)
# Insert-Code-Here {_final} ()
# DO-NOT-DELETE splicer.end(_final)
