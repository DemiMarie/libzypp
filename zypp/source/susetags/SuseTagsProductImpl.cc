/*---------------------------------------------------------------------\
|                          ____ _   __ __ ___                          |
|                         |__  / \ / / . \ . \                         |
|                           / / \ V /|  _/  _/                         |
|                          / /__ | | | | | |                           |
|                         /_____||_| |_| |_|                           |
|                                                                      |
\---------------------------------------------------------------------*/
/** \file	zypp/detail/SuseTagsProductImpl.cc
 *
*/
#include "zypp/source/susetags/SuseTagsProductImpl.h"

using namespace std;

///////////////////////////////////////////////////////////////////
namespace zypp
{ /////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////
  namespace source
  { /////////////////////////////////////////////////////////////////
  namespace susetags
  {
    ///////////////////////////////////////////////////////////////////
    //
    //	METHOD NAME : SuseTagsProductImpl::SuseTagsProductImpl
    //	METHOD TYPE : Ctor
    //
    SuseTagsProductImpl::SuseTagsProductImpl()
    {}

    ///////////////////////////////////////////////////////////////////
    //
    //	METHOD NAME : SuseTagsProductImpl::~SuseTagsProductImpl
    //	METHOD TYPE : Dtor
    //
    SuseTagsProductImpl::~SuseTagsProductImpl()
    {}


    std::string SuseTagsProductImpl::category() const
    { return _category; }

    Label SuseTagsProductImpl::vendor() const
    { return _vendor; }

    Label SuseTagsProductImpl::displayName( const Locale & locale_r ) const
    { return _label.text(locale_r); }

    Source_Ref SuseTagsProductImpl::source() const
    { return _source; }
    
    Url SuseTagsProductImpl::releaseNotesUrl() const
    { return _release_notes_url; }

    /////////////////////////////////////////////////////////////////
  } // namespace detail
  ///////////////////////////////////////////////////////////////////
  }
  /////////////////////////////////////////////////////////////////
} // namespace zypp
///////////////////////////////////////////////////////////////////
