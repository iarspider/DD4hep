//==========================================================================
//  AIDA Detector description implementation 
//--------------------------------------------------------------------------
// Copyright (C) Organisation europeenne pour la Recherche nucleaire (CERN)
// All rights reserved.
//
// For the licensing terms see $DD4hepINSTALL/LICENSE.
// For the list of contributors see $DD4hepINSTALL/doc/CREDITS.
//
// Author     : M.Frank
//
//==========================================================================
#ifndef DD4HEP_CONDITIONS_CONDITIONSTAGS_H
#define DD4HEP_CONDITIONS_CONDITIONSTAGS_H

// Framework include files
#include "XML/XMLElements.h"

#ifndef UNICODE 
#define UNICODE(x)  extern const ::dd4hep::xml::Tag_t Unicode_##x 
#endif

/// Namespace for the AIDA detector description toolkit
namespace dd4hep {

  /// Namespace for the AIDA detector description toolkit supporting XML utilities 
  namespace xml {
    
    /// Namespace of conditions unicode tags
    namespace ddupgrade  {

      UNICODE(uta);
      UNICODE(utb);
      UNICODE(jacket);
      UNICODE(balcony);
      UNICODE(correction);

      // BCM
      UNICODE(wire);
      UNICODE(contact);
      UNICODE(mount);

    }
    // User must ensure there are no clashes. If yes, then the clashing entry is unnecessary.
    //using namespace ::dd4hep::xml::Conditions;
  }
}
#undef UNICODE // Do not miss this one!

#include "XML/XMLTags.h"
#define _LBU(x) ::dd4hep::xml::ddupgrade::Unicode_##x

#endif /* DD4HEP_CONDITIONS_CONDITIONSTAGS_H  */