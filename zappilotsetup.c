/*
 * zappilotsetup.c: A plugin for the Video Disk Recorder
 *
 * See the README file for copyright information and how to reach the author.
 *
 * $Id$
 */

#include "zappilotsetup.h"
#include "config.h"

cZappilotSetup::cZappilotSetup(void)
{

   CloseOnSwitch = config.closeonswitch;
   Hidemenu      = config.hidemenu;
   FastBrowse    = config.fastbrowse;

   Add(new cMenuEditBoolItem(tr("Close on OK"), &CloseOnSwitch));
   Add(new cMenuEditBoolItem(  tr("Hide main menu entry"), &Hidemenu, tr("no"), tr("yes")));
   Add(new cMenuEditBoolItem(  tr("Fast browse"), &FastBrowse, tr("no"), tr("yes")));
}


void cZappilotSetup::Store(void)
{
   SetupStore("CloseOnSwitch", config.closeonswitch = CloseOnSwitch);
   SetupStore("Hidemenu",     config.hidemenu = Hidemenu);
   SetupStore("FastBrowse",     config.fastbrowse = FastBrowse);
}
