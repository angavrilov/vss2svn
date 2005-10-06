// SSTypes.cpp:
//
//////////////////////////////////////////////////////////////////////

#include "StdAfx.h"
#include "SSTypes.h"

//---------------------------------------------------------------------------
extern char* g_szActions[] = { 
  "Labeled",            // = 0
  "Created Project",    // = 1
  "Added Project",      // = 2
  "Added File",         // = 3
  "Destroyed Project",  // = 4
  "Destroyed File",     // = 5
  "Deleted Project",    // = 6
  "Deleted File",       // = 7
  "Recovered Project",  // = 8
  "Recovered File",     // = 9
  "Renamed Project",    // = 10
  "Renamed File",       // = 11
  "Action 12",          // missing action 12
  "Action 13",          // missing action 13
  "Shared File",        // = 14
  "Branch File",        // = 15 ???
  "Created File",       // = 16
  "Checked in",         // = 17
  "Action 18",          // missing action 18
  "RollBack"            // = 19
  // missing known actions: branches, archives, restores
};

const char* CAction::ActionToString (eAction e)
{
  if (e < countof (g_szActions))
    return g_szActions[e];
  return ("unknown");
}
