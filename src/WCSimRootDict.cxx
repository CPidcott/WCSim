// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIs1668863dIDevdIWCSimdIsrcdIWCSimRootDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/home/s1668863/Dev/WCSim/include/WCSimRootEvent.hh"
#include "/home/s1668863/Dev/WCSim/include/WCSimRootGeom.hh"
#include "/home/s1668863/Dev/WCSim/include/WCSimPmtInfo.hh"
#include "/home/s1668863/Dev/WCSim/include/WCSimEnumerations.hh"
#include "/home/s1668863/Dev/WCSim/include/WCSimRootOptions.hh"
#include "/home/s1668863/Dev/WCSim/include/TJNuBeamFlux.hh"
#include "/home/s1668863/Dev/WCSim/include/TNRooTrackerVtx.hh"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *WCSimEnumerations_Dictionary();
   static void WCSimEnumerations_TClassManip(TClass*);
   static void *new_WCSimEnumerations(void *p = 0);
   static void *newArray_WCSimEnumerations(Long_t size, void *p);
   static void delete_WCSimEnumerations(void *p);
   static void deleteArray_WCSimEnumerations(void *p);
   static void destruct_WCSimEnumerations(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WCSimEnumerations*)
   {
      ::WCSimEnumerations *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::WCSimEnumerations));
      static ::ROOT::TGenericClassInfo 
         instance("WCSimEnumerations", "WCSimEnumerations.hh", 32,
                  typeid(::WCSimEnumerations), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &WCSimEnumerations_Dictionary, isa_proxy, 4,
                  sizeof(::WCSimEnumerations) );
      instance.SetNew(&new_WCSimEnumerations);
      instance.SetNewArray(&newArray_WCSimEnumerations);
      instance.SetDelete(&delete_WCSimEnumerations);
      instance.SetDeleteArray(&deleteArray_WCSimEnumerations);
      instance.SetDestructor(&destruct_WCSimEnumerations);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WCSimEnumerations*)
   {
      return GenerateInitInstanceLocal((::WCSimEnumerations*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::WCSimEnumerations*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *WCSimEnumerations_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::WCSimEnumerations*)0x0)->GetClass();
      WCSimEnumerations_TClassManip(theClass);
   return theClass;
   }

   static void WCSimEnumerations_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_WCSimRootTrack(void *p = 0);
   static void *newArray_WCSimRootTrack(Long_t size, void *p);
   static void delete_WCSimRootTrack(void *p);
   static void deleteArray_WCSimRootTrack(void *p);
   static void destruct_WCSimRootTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WCSimRootTrack*)
   {
      ::WCSimRootTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::WCSimRootTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("WCSimRootTrack", ::WCSimRootTrack::Class_Version(), "WCSimRootEvent.hh", 23,
                  typeid(::WCSimRootTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::WCSimRootTrack::Dictionary, isa_proxy, 4,
                  sizeof(::WCSimRootTrack) );
      instance.SetNew(&new_WCSimRootTrack);
      instance.SetNewArray(&newArray_WCSimRootTrack);
      instance.SetDelete(&delete_WCSimRootTrack);
      instance.SetDeleteArray(&deleteArray_WCSimRootTrack);
      instance.SetDestructor(&destruct_WCSimRootTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WCSimRootTrack*)
   {
      return GenerateInitInstanceLocal((::WCSimRootTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::WCSimRootTrack*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_WCSimRootCherenkovHit(void *p = 0);
   static void *newArray_WCSimRootCherenkovHit(Long_t size, void *p);
   static void delete_WCSimRootCherenkovHit(void *p);
   static void deleteArray_WCSimRootCherenkovHit(void *p);
   static void destruct_WCSimRootCherenkovHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WCSimRootCherenkovHit*)
   {
      ::WCSimRootCherenkovHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::WCSimRootCherenkovHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("WCSimRootCherenkovHit", ::WCSimRootCherenkovHit::Class_Version(), "WCSimRootEvent.hh", 83,
                  typeid(::WCSimRootCherenkovHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::WCSimRootCherenkovHit::Dictionary, isa_proxy, 4,
                  sizeof(::WCSimRootCherenkovHit) );
      instance.SetNew(&new_WCSimRootCherenkovHit);
      instance.SetNewArray(&newArray_WCSimRootCherenkovHit);
      instance.SetDelete(&delete_WCSimRootCherenkovHit);
      instance.SetDeleteArray(&deleteArray_WCSimRootCherenkovHit);
      instance.SetDestructor(&destruct_WCSimRootCherenkovHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WCSimRootCherenkovHit*)
   {
      return GenerateInitInstanceLocal((::WCSimRootCherenkovHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::WCSimRootCherenkovHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_WCSimRootCherenkovHitTime(void *p = 0);
   static void *newArray_WCSimRootCherenkovHitTime(Long_t size, void *p);
   static void delete_WCSimRootCherenkovHitTime(void *p);
   static void deleteArray_WCSimRootCherenkovHitTime(void *p);
   static void destruct_WCSimRootCherenkovHitTime(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WCSimRootCherenkovHitTime*)
   {
      ::WCSimRootCherenkovHitTime *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::WCSimRootCherenkovHitTime >(0);
      static ::ROOT::TGenericClassInfo 
         instance("WCSimRootCherenkovHitTime", ::WCSimRootCherenkovHitTime::Class_Version(), "WCSimRootEvent.hh", 111,
                  typeid(::WCSimRootCherenkovHitTime), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::WCSimRootCherenkovHitTime::Dictionary, isa_proxy, 4,
                  sizeof(::WCSimRootCherenkovHitTime) );
      instance.SetNew(&new_WCSimRootCherenkovHitTime);
      instance.SetNewArray(&newArray_WCSimRootCherenkovHitTime);
      instance.SetDelete(&delete_WCSimRootCherenkovHitTime);
      instance.SetDeleteArray(&deleteArray_WCSimRootCherenkovHitTime);
      instance.SetDestructor(&destruct_WCSimRootCherenkovHitTime);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WCSimRootCherenkovHitTime*)
   {
      return GenerateInitInstanceLocal((::WCSimRootCherenkovHitTime*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::WCSimRootCherenkovHitTime*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_WCSimRootCherenkovDigiHit(void *p = 0);
   static void *newArray_WCSimRootCherenkovDigiHit(Long_t size, void *p);
   static void delete_WCSimRootCherenkovDigiHit(void *p);
   static void deleteArray_WCSimRootCherenkovDigiHit(void *p);
   static void destruct_WCSimRootCherenkovDigiHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WCSimRootCherenkovDigiHit*)
   {
      ::WCSimRootCherenkovDigiHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::WCSimRootCherenkovDigiHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("WCSimRootCherenkovDigiHit", ::WCSimRootCherenkovDigiHit::Class_Version(), "WCSimRootEvent.hh", 134,
                  typeid(::WCSimRootCherenkovDigiHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::WCSimRootCherenkovDigiHit::Dictionary, isa_proxy, 4,
                  sizeof(::WCSimRootCherenkovDigiHit) );
      instance.SetNew(&new_WCSimRootCherenkovDigiHit);
      instance.SetNewArray(&newArray_WCSimRootCherenkovDigiHit);
      instance.SetDelete(&delete_WCSimRootCherenkovDigiHit);
      instance.SetDeleteArray(&deleteArray_WCSimRootCherenkovDigiHit);
      instance.SetDestructor(&destruct_WCSimRootCherenkovDigiHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WCSimRootCherenkovDigiHit*)
   {
      return GenerateInitInstanceLocal((::WCSimRootCherenkovDigiHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::WCSimRootCherenkovDigiHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_WCSimRootEventHeader(void *p = 0);
   static void *newArray_WCSimRootEventHeader(Long_t size, void *p);
   static void delete_WCSimRootEventHeader(void *p);
   static void deleteArray_WCSimRootEventHeader(void *p);
   static void destruct_WCSimRootEventHeader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WCSimRootEventHeader*)
   {
      ::WCSimRootEventHeader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::WCSimRootEventHeader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("WCSimRootEventHeader", ::WCSimRootEventHeader::Class_Version(), "WCSimRootEvent.hh", 165,
                  typeid(::WCSimRootEventHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::WCSimRootEventHeader::Dictionary, isa_proxy, 4,
                  sizeof(::WCSimRootEventHeader) );
      instance.SetNew(&new_WCSimRootEventHeader);
      instance.SetNewArray(&newArray_WCSimRootEventHeader);
      instance.SetDelete(&delete_WCSimRootEventHeader);
      instance.SetDeleteArray(&deleteArray_WCSimRootEventHeader);
      instance.SetDestructor(&destruct_WCSimRootEventHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WCSimRootEventHeader*)
   {
      return GenerateInitInstanceLocal((::WCSimRootEventHeader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::WCSimRootEventHeader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_WCSimRootPi0(void *p = 0);
   static void *newArray_WCSimRootPi0(Long_t size, void *p);
   static void delete_WCSimRootPi0(void *p);
   static void deleteArray_WCSimRootPi0(void *p);
   static void destruct_WCSimRootPi0(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WCSimRootPi0*)
   {
      ::WCSimRootPi0 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::WCSimRootPi0 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("WCSimRootPi0", ::WCSimRootPi0::Class_Version(), "WCSimRootEvent.hh", 189,
                  typeid(::WCSimRootPi0), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::WCSimRootPi0::Dictionary, isa_proxy, 4,
                  sizeof(::WCSimRootPi0) );
      instance.SetNew(&new_WCSimRootPi0);
      instance.SetNewArray(&newArray_WCSimRootPi0);
      instance.SetDelete(&delete_WCSimRootPi0);
      instance.SetDeleteArray(&deleteArray_WCSimRootPi0);
      instance.SetDestructor(&destruct_WCSimRootPi0);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WCSimRootPi0*)
   {
      return GenerateInitInstanceLocal((::WCSimRootPi0*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::WCSimRootPi0*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_WCSimRootCaptureGamma(void *p = 0);
   static void *newArray_WCSimRootCaptureGamma(Long_t size, void *p);
   static void delete_WCSimRootCaptureGamma(void *p);
   static void deleteArray_WCSimRootCaptureGamma(void *p);
   static void destruct_WCSimRootCaptureGamma(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WCSimRootCaptureGamma*)
   {
      ::WCSimRootCaptureGamma *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::WCSimRootCaptureGamma >(0);
      static ::ROOT::TGenericClassInfo 
         instance("WCSimRootCaptureGamma", ::WCSimRootCaptureGamma::Class_Version(), "WCSimRootEvent.hh", 217,
                  typeid(::WCSimRootCaptureGamma), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::WCSimRootCaptureGamma::Dictionary, isa_proxy, 4,
                  sizeof(::WCSimRootCaptureGamma) );
      instance.SetNew(&new_WCSimRootCaptureGamma);
      instance.SetNewArray(&newArray_WCSimRootCaptureGamma);
      instance.SetDelete(&delete_WCSimRootCaptureGamma);
      instance.SetDeleteArray(&deleteArray_WCSimRootCaptureGamma);
      instance.SetDestructor(&destruct_WCSimRootCaptureGamma);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WCSimRootCaptureGamma*)
   {
      return GenerateInitInstanceLocal((::WCSimRootCaptureGamma*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::WCSimRootCaptureGamma*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_WCSimRootCapture(void *p = 0);
   static void *newArray_WCSimRootCapture(Long_t size, void *p);
   static void delete_WCSimRootCapture(void *p);
   static void deleteArray_WCSimRootCapture(void *p);
   static void destruct_WCSimRootCapture(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WCSimRootCapture*)
   {
      ::WCSimRootCapture *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::WCSimRootCapture >(0);
      static ::ROOT::TGenericClassInfo 
         instance("WCSimRootCapture", ::WCSimRootCapture::Class_Version(), "WCSimRootEvent.hh", 242,
                  typeid(::WCSimRootCapture), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::WCSimRootCapture::Dictionary, isa_proxy, 4,
                  sizeof(::WCSimRootCapture) );
      instance.SetNew(&new_WCSimRootCapture);
      instance.SetNewArray(&newArray_WCSimRootCapture);
      instance.SetDelete(&delete_WCSimRootCapture);
      instance.SetDeleteArray(&deleteArray_WCSimRootCapture);
      instance.SetDestructor(&destruct_WCSimRootCapture);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WCSimRootCapture*)
   {
      return GenerateInitInstanceLocal((::WCSimRootCapture*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::WCSimRootCapture*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_WCSimRootTrigger(void *p = 0);
   static void *newArray_WCSimRootTrigger(Long_t size, void *p);
   static void delete_WCSimRootTrigger(void *p);
   static void deleteArray_WCSimRootTrigger(void *p);
   static void destruct_WCSimRootTrigger(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WCSimRootTrigger*)
   {
      ::WCSimRootTrigger *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::WCSimRootTrigger >(0);
      static ::ROOT::TGenericClassInfo 
         instance("WCSimRootTrigger", ::WCSimRootTrigger::Class_Version(), "WCSimRootEvent.hh", 290,
                  typeid(::WCSimRootTrigger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::WCSimRootTrigger::Dictionary, isa_proxy, 4,
                  sizeof(::WCSimRootTrigger) );
      instance.SetNew(&new_WCSimRootTrigger);
      instance.SetNewArray(&newArray_WCSimRootTrigger);
      instance.SetDelete(&delete_WCSimRootTrigger);
      instance.SetDeleteArray(&deleteArray_WCSimRootTrigger);
      instance.SetDestructor(&destruct_WCSimRootTrigger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WCSimRootTrigger*)
   {
      return GenerateInitInstanceLocal((::WCSimRootTrigger*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::WCSimRootTrigger*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_WCSimRootEvent(void *p = 0);
   static void *newArray_WCSimRootEvent(Long_t size, void *p);
   static void delete_WCSimRootEvent(void *p);
   static void deleteArray_WCSimRootEvent(void *p);
   static void destruct_WCSimRootEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WCSimRootEvent*)
   {
      ::WCSimRootEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::WCSimRootEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("WCSimRootEvent", ::WCSimRootEvent::Class_Version(), "WCSimRootEvent.hh", 429,
                  typeid(::WCSimRootEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::WCSimRootEvent::Dictionary, isa_proxy, 4,
                  sizeof(::WCSimRootEvent) );
      instance.SetNew(&new_WCSimRootEvent);
      instance.SetNewArray(&newArray_WCSimRootEvent);
      instance.SetDelete(&delete_WCSimRootEvent);
      instance.SetDeleteArray(&deleteArray_WCSimRootEvent);
      instance.SetDestructor(&destruct_WCSimRootEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WCSimRootEvent*)
   {
      return GenerateInitInstanceLocal((::WCSimRootEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::WCSimRootEvent*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_WCSimRootPMT(void *p = 0);
   static void *newArray_WCSimRootPMT(Long_t size, void *p);
   static void delete_WCSimRootPMT(void *p);
   static void deleteArray_WCSimRootPMT(void *p);
   static void destruct_WCSimRootPMT(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WCSimRootPMT*)
   {
      ::WCSimRootPMT *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::WCSimRootPMT >(0);
      static ::ROOT::TGenericClassInfo 
         instance("WCSimRootPMT", ::WCSimRootPMT::Class_Version(), "WCSimRootGeom.hh", 20,
                  typeid(::WCSimRootPMT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::WCSimRootPMT::Dictionary, isa_proxy, 4,
                  sizeof(::WCSimRootPMT) );
      instance.SetNew(&new_WCSimRootPMT);
      instance.SetNewArray(&newArray_WCSimRootPMT);
      instance.SetDelete(&delete_WCSimRootPMT);
      instance.SetDeleteArray(&deleteArray_WCSimRootPMT);
      instance.SetDestructor(&destruct_WCSimRootPMT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WCSimRootPMT*)
   {
      return GenerateInitInstanceLocal((::WCSimRootPMT*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::WCSimRootPMT*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_WCSimRootGeom(void *p = 0);
   static void *newArray_WCSimRootGeom(Long_t size, void *p);
   static void delete_WCSimRootGeom(void *p);
   static void deleteArray_WCSimRootGeom(void *p);
   static void destruct_WCSimRootGeom(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WCSimRootGeom*)
   {
      ::WCSimRootGeom *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::WCSimRootGeom >(0);
      static ::ROOT::TGenericClassInfo 
         instance("WCSimRootGeom", ::WCSimRootGeom::Class_Version(), "WCSimRootGeom.hh", 56,
                  typeid(::WCSimRootGeom), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::WCSimRootGeom::Dictionary, isa_proxy, 4,
                  sizeof(::WCSimRootGeom) );
      instance.SetNew(&new_WCSimRootGeom);
      instance.SetNewArray(&newArray_WCSimRootGeom);
      instance.SetDelete(&delete_WCSimRootGeom);
      instance.SetDeleteArray(&deleteArray_WCSimRootGeom);
      instance.SetDestructor(&destruct_WCSimRootGeom);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WCSimRootGeom*)
   {
      return GenerateInitInstanceLocal((::WCSimRootGeom*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::WCSimRootGeom*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_WCSimPmtInfo(void *p = 0);
   static void *newArray_WCSimPmtInfo(Long_t size, void *p);
   static void delete_WCSimPmtInfo(void *p);
   static void deleteArray_WCSimPmtInfo(void *p);
   static void destruct_WCSimPmtInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WCSimPmtInfo*)
   {
      ::WCSimPmtInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::WCSimPmtInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("WCSimPmtInfo", ::WCSimPmtInfo::Class_Version(), "WCSimPmtInfo.hh", 14,
                  typeid(::WCSimPmtInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::WCSimPmtInfo::Dictionary, isa_proxy, 4,
                  sizeof(::WCSimPmtInfo) );
      instance.SetNew(&new_WCSimPmtInfo);
      instance.SetNewArray(&newArray_WCSimPmtInfo);
      instance.SetDelete(&delete_WCSimPmtInfo);
      instance.SetDeleteArray(&deleteArray_WCSimPmtInfo);
      instance.SetDestructor(&destruct_WCSimPmtInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WCSimPmtInfo*)
   {
      return GenerateInitInstanceLocal((::WCSimPmtInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::WCSimPmtInfo*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_WCSimRootOptions(void *p = 0);
   static void *newArray_WCSimRootOptions(Long_t size, void *p);
   static void delete_WCSimRootOptions(void *p);
   static void deleteArray_WCSimRootOptions(void *p);
   static void destruct_WCSimRootOptions(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WCSimRootOptions*)
   {
      ::WCSimRootOptions *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::WCSimRootOptions >(0);
      static ::ROOT::TGenericClassInfo 
         instance("WCSimRootOptions", ::WCSimRootOptions::Class_Version(), "WCSimRootOptions.hh", 22,
                  typeid(::WCSimRootOptions), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::WCSimRootOptions::Dictionary, isa_proxy, 4,
                  sizeof(::WCSimRootOptions) );
      instance.SetNew(&new_WCSimRootOptions);
      instance.SetNewArray(&newArray_WCSimRootOptions);
      instance.SetDelete(&delete_WCSimRootOptions);
      instance.SetDeleteArray(&deleteArray_WCSimRootOptions);
      instance.SetDestructor(&destruct_WCSimRootOptions);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WCSimRootOptions*)
   {
      return GenerateInitInstanceLocal((::WCSimRootOptions*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::WCSimRootOptions*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooTrackerVtxBase(void *p = 0);
   static void *newArray_RooTrackerVtxBase(Long_t size, void *p);
   static void delete_RooTrackerVtxBase(void *p);
   static void deleteArray_RooTrackerVtxBase(void *p);
   static void destruct_RooTrackerVtxBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooTrackerVtxBase*)
   {
      ::RooTrackerVtxBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooTrackerVtxBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RooTrackerVtxBase", ::RooTrackerVtxBase::Class_Version(), "TJNuBeamFlux.hh", 20,
                  typeid(::RooTrackerVtxBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooTrackerVtxBase::Dictionary, isa_proxy, 4,
                  sizeof(::RooTrackerVtxBase) );
      instance.SetNew(&new_RooTrackerVtxBase);
      instance.SetNewArray(&newArray_RooTrackerVtxBase);
      instance.SetDelete(&delete_RooTrackerVtxBase);
      instance.SetDeleteArray(&deleteArray_RooTrackerVtxBase);
      instance.SetDestructor(&destruct_RooTrackerVtxBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooTrackerVtxBase*)
   {
      return GenerateInitInstanceLocal((::RooTrackerVtxBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RooTrackerVtxBase*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_JNuBeamFlux(void *p = 0);
   static void *newArray_JNuBeamFlux(Long_t size, void *p);
   static void delete_JNuBeamFlux(void *p);
   static void deleteArray_JNuBeamFlux(void *p);
   static void destruct_JNuBeamFlux(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::JNuBeamFlux*)
   {
      ::JNuBeamFlux *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::JNuBeamFlux >(0);
      static ::ROOT::TGenericClassInfo 
         instance("JNuBeamFlux", ::JNuBeamFlux::Class_Version(), "TJNuBeamFlux.hh", 27,
                  typeid(::JNuBeamFlux), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::JNuBeamFlux::Dictionary, isa_proxy, 4,
                  sizeof(::JNuBeamFlux) );
      instance.SetNew(&new_JNuBeamFlux);
      instance.SetNewArray(&newArray_JNuBeamFlux);
      instance.SetDelete(&delete_JNuBeamFlux);
      instance.SetDeleteArray(&deleteArray_JNuBeamFlux);
      instance.SetDestructor(&destruct_JNuBeamFlux);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::JNuBeamFlux*)
   {
      return GenerateInitInstanceLocal((::JNuBeamFlux*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::JNuBeamFlux*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_NRooTrackerVtx(void *p = 0);
   static void *newArray_NRooTrackerVtx(Long_t size, void *p);
   static void delete_NRooTrackerVtx(void *p);
   static void deleteArray_NRooTrackerVtx(void *p);
   static void destruct_NRooTrackerVtx(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NRooTrackerVtx*)
   {
      ::NRooTrackerVtx *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::NRooTrackerVtx >(0);
      static ::ROOT::TGenericClassInfo 
         instance("NRooTrackerVtx", ::NRooTrackerVtx::Class_Version(), "TNRooTrackerVtx.hh", 52,
                  typeid(::NRooTrackerVtx), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::NRooTrackerVtx::Dictionary, isa_proxy, 4,
                  sizeof(::NRooTrackerVtx) );
      instance.SetNew(&new_NRooTrackerVtx);
      instance.SetNewArray(&newArray_NRooTrackerVtx);
      instance.SetDelete(&delete_NRooTrackerVtx);
      instance.SetDeleteArray(&deleteArray_NRooTrackerVtx);
      instance.SetDestructor(&destruct_NRooTrackerVtx);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NRooTrackerVtx*)
   {
      return GenerateInitInstanceLocal((::NRooTrackerVtx*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::NRooTrackerVtx*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr WCSimRootTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *WCSimRootTrack::Class_Name()
{
   return "WCSimRootTrack";
}

//______________________________________________________________________________
const char *WCSimRootTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int WCSimRootTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WCSimRootTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WCSimRootTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr WCSimRootCherenkovHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *WCSimRootCherenkovHit::Class_Name()
{
   return "WCSimRootCherenkovHit";
}

//______________________________________________________________________________
const char *WCSimRootCherenkovHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootCherenkovHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int WCSimRootCherenkovHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootCherenkovHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WCSimRootCherenkovHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootCherenkovHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WCSimRootCherenkovHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootCherenkovHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr WCSimRootCherenkovHitTime::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *WCSimRootCherenkovHitTime::Class_Name()
{
   return "WCSimRootCherenkovHitTime";
}

//______________________________________________________________________________
const char *WCSimRootCherenkovHitTime::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootCherenkovHitTime*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int WCSimRootCherenkovHitTime::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootCherenkovHitTime*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WCSimRootCherenkovHitTime::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootCherenkovHitTime*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WCSimRootCherenkovHitTime::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootCherenkovHitTime*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr WCSimRootCherenkovDigiHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *WCSimRootCherenkovDigiHit::Class_Name()
{
   return "WCSimRootCherenkovDigiHit";
}

//______________________________________________________________________________
const char *WCSimRootCherenkovDigiHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootCherenkovDigiHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int WCSimRootCherenkovDigiHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootCherenkovDigiHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WCSimRootCherenkovDigiHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootCherenkovDigiHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WCSimRootCherenkovDigiHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootCherenkovDigiHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr WCSimRootEventHeader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *WCSimRootEventHeader::Class_Name()
{
   return "WCSimRootEventHeader";
}

//______________________________________________________________________________
const char *WCSimRootEventHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootEventHeader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int WCSimRootEventHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootEventHeader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WCSimRootEventHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootEventHeader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WCSimRootEventHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootEventHeader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr WCSimRootPi0::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *WCSimRootPi0::Class_Name()
{
   return "WCSimRootPi0";
}

//______________________________________________________________________________
const char *WCSimRootPi0::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootPi0*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int WCSimRootPi0::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootPi0*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WCSimRootPi0::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootPi0*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WCSimRootPi0::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootPi0*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr WCSimRootCaptureGamma::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *WCSimRootCaptureGamma::Class_Name()
{
   return "WCSimRootCaptureGamma";
}

//______________________________________________________________________________
const char *WCSimRootCaptureGamma::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootCaptureGamma*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int WCSimRootCaptureGamma::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootCaptureGamma*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WCSimRootCaptureGamma::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootCaptureGamma*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WCSimRootCaptureGamma::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootCaptureGamma*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr WCSimRootCapture::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *WCSimRootCapture::Class_Name()
{
   return "WCSimRootCapture";
}

//______________________________________________________________________________
const char *WCSimRootCapture::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootCapture*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int WCSimRootCapture::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootCapture*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WCSimRootCapture::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootCapture*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WCSimRootCapture::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootCapture*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr WCSimRootTrigger::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *WCSimRootTrigger::Class_Name()
{
   return "WCSimRootTrigger";
}

//______________________________________________________________________________
const char *WCSimRootTrigger::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootTrigger*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int WCSimRootTrigger::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootTrigger*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WCSimRootTrigger::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootTrigger*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WCSimRootTrigger::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootTrigger*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr WCSimRootEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *WCSimRootEvent::Class_Name()
{
   return "WCSimRootEvent";
}

//______________________________________________________________________________
const char *WCSimRootEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int WCSimRootEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WCSimRootEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WCSimRootEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr WCSimRootPMT::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *WCSimRootPMT::Class_Name()
{
   return "WCSimRootPMT";
}

//______________________________________________________________________________
const char *WCSimRootPMT::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootPMT*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int WCSimRootPMT::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootPMT*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WCSimRootPMT::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootPMT*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WCSimRootPMT::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootPMT*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr WCSimRootGeom::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *WCSimRootGeom::Class_Name()
{
   return "WCSimRootGeom";
}

//______________________________________________________________________________
const char *WCSimRootGeom::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootGeom*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int WCSimRootGeom::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootGeom*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WCSimRootGeom::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootGeom*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WCSimRootGeom::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootGeom*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr WCSimPmtInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *WCSimPmtInfo::Class_Name()
{
   return "WCSimPmtInfo";
}

//______________________________________________________________________________
const char *WCSimPmtInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimPmtInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int WCSimPmtInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimPmtInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WCSimPmtInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimPmtInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WCSimPmtInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimPmtInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr WCSimRootOptions::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *WCSimRootOptions::Class_Name()
{
   return "WCSimRootOptions";
}

//______________________________________________________________________________
const char *WCSimRootOptions::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootOptions*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int WCSimRootOptions::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootOptions*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WCSimRootOptions::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootOptions*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WCSimRootOptions::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WCSimRootOptions*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooTrackerVtxBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RooTrackerVtxBase::Class_Name()
{
   return "RooTrackerVtxBase";
}

//______________________________________________________________________________
const char *RooTrackerVtxBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTrackerVtxBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RooTrackerVtxBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTrackerVtxBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooTrackerVtxBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTrackerVtxBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooTrackerVtxBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTrackerVtxBase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr JNuBeamFlux::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *JNuBeamFlux::Class_Name()
{
   return "JNuBeamFlux";
}

//______________________________________________________________________________
const char *JNuBeamFlux::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JNuBeamFlux*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int JNuBeamFlux::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JNuBeamFlux*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *JNuBeamFlux::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JNuBeamFlux*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *JNuBeamFlux::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JNuBeamFlux*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr NRooTrackerVtx::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *NRooTrackerVtx::Class_Name()
{
   return "NRooTrackerVtx";
}

//______________________________________________________________________________
const char *NRooTrackerVtx::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NRooTrackerVtx*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int NRooTrackerVtx::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NRooTrackerVtx*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *NRooTrackerVtx::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NRooTrackerVtx*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *NRooTrackerVtx::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NRooTrackerVtx*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_WCSimEnumerations(void *p) {
      return  p ? new(p) ::WCSimEnumerations : new ::WCSimEnumerations;
   }
   static void *newArray_WCSimEnumerations(Long_t nElements, void *p) {
      return p ? new(p) ::WCSimEnumerations[nElements] : new ::WCSimEnumerations[nElements];
   }
   // Wrapper around operator delete
   static void delete_WCSimEnumerations(void *p) {
      delete ((::WCSimEnumerations*)p);
   }
   static void deleteArray_WCSimEnumerations(void *p) {
      delete [] ((::WCSimEnumerations*)p);
   }
   static void destruct_WCSimEnumerations(void *p) {
      typedef ::WCSimEnumerations current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WCSimEnumerations

//______________________________________________________________________________
void WCSimRootTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class WCSimRootTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(WCSimRootTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(WCSimRootTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_WCSimRootTrack(void *p) {
      return  p ? new(p) ::WCSimRootTrack : new ::WCSimRootTrack;
   }
   static void *newArray_WCSimRootTrack(Long_t nElements, void *p) {
      return p ? new(p) ::WCSimRootTrack[nElements] : new ::WCSimRootTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_WCSimRootTrack(void *p) {
      delete ((::WCSimRootTrack*)p);
   }
   static void deleteArray_WCSimRootTrack(void *p) {
      delete [] ((::WCSimRootTrack*)p);
   }
   static void destruct_WCSimRootTrack(void *p) {
      typedef ::WCSimRootTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WCSimRootTrack

//______________________________________________________________________________
void WCSimRootCherenkovHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class WCSimRootCherenkovHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(WCSimRootCherenkovHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(WCSimRootCherenkovHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_WCSimRootCherenkovHit(void *p) {
      return  p ? new(p) ::WCSimRootCherenkovHit : new ::WCSimRootCherenkovHit;
   }
   static void *newArray_WCSimRootCherenkovHit(Long_t nElements, void *p) {
      return p ? new(p) ::WCSimRootCherenkovHit[nElements] : new ::WCSimRootCherenkovHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_WCSimRootCherenkovHit(void *p) {
      delete ((::WCSimRootCherenkovHit*)p);
   }
   static void deleteArray_WCSimRootCherenkovHit(void *p) {
      delete [] ((::WCSimRootCherenkovHit*)p);
   }
   static void destruct_WCSimRootCherenkovHit(void *p) {
      typedef ::WCSimRootCherenkovHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WCSimRootCherenkovHit

//______________________________________________________________________________
void WCSimRootCherenkovHitTime::Streamer(TBuffer &R__b)
{
   // Stream an object of class WCSimRootCherenkovHitTime.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(WCSimRootCherenkovHitTime::Class(),this);
   } else {
      R__b.WriteClassBuffer(WCSimRootCherenkovHitTime::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_WCSimRootCherenkovHitTime(void *p) {
      return  p ? new(p) ::WCSimRootCherenkovHitTime : new ::WCSimRootCherenkovHitTime;
   }
   static void *newArray_WCSimRootCherenkovHitTime(Long_t nElements, void *p) {
      return p ? new(p) ::WCSimRootCherenkovHitTime[nElements] : new ::WCSimRootCherenkovHitTime[nElements];
   }
   // Wrapper around operator delete
   static void delete_WCSimRootCherenkovHitTime(void *p) {
      delete ((::WCSimRootCherenkovHitTime*)p);
   }
   static void deleteArray_WCSimRootCherenkovHitTime(void *p) {
      delete [] ((::WCSimRootCherenkovHitTime*)p);
   }
   static void destruct_WCSimRootCherenkovHitTime(void *p) {
      typedef ::WCSimRootCherenkovHitTime current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WCSimRootCherenkovHitTime

//______________________________________________________________________________
void WCSimRootCherenkovDigiHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class WCSimRootCherenkovDigiHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(WCSimRootCherenkovDigiHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(WCSimRootCherenkovDigiHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_WCSimRootCherenkovDigiHit(void *p) {
      return  p ? new(p) ::WCSimRootCherenkovDigiHit : new ::WCSimRootCherenkovDigiHit;
   }
   static void *newArray_WCSimRootCherenkovDigiHit(Long_t nElements, void *p) {
      return p ? new(p) ::WCSimRootCherenkovDigiHit[nElements] : new ::WCSimRootCherenkovDigiHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_WCSimRootCherenkovDigiHit(void *p) {
      delete ((::WCSimRootCherenkovDigiHit*)p);
   }
   static void deleteArray_WCSimRootCherenkovDigiHit(void *p) {
      delete [] ((::WCSimRootCherenkovDigiHit*)p);
   }
   static void destruct_WCSimRootCherenkovDigiHit(void *p) {
      typedef ::WCSimRootCherenkovDigiHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WCSimRootCherenkovDigiHit

//______________________________________________________________________________
void WCSimRootEventHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class WCSimRootEventHeader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(WCSimRootEventHeader::Class(),this);
   } else {
      R__b.WriteClassBuffer(WCSimRootEventHeader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_WCSimRootEventHeader(void *p) {
      return  p ? new(p) ::WCSimRootEventHeader : new ::WCSimRootEventHeader;
   }
   static void *newArray_WCSimRootEventHeader(Long_t nElements, void *p) {
      return p ? new(p) ::WCSimRootEventHeader[nElements] : new ::WCSimRootEventHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_WCSimRootEventHeader(void *p) {
      delete ((::WCSimRootEventHeader*)p);
   }
   static void deleteArray_WCSimRootEventHeader(void *p) {
      delete [] ((::WCSimRootEventHeader*)p);
   }
   static void destruct_WCSimRootEventHeader(void *p) {
      typedef ::WCSimRootEventHeader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WCSimRootEventHeader

//______________________________________________________________________________
void WCSimRootPi0::Streamer(TBuffer &R__b)
{
   // Stream an object of class WCSimRootPi0.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(WCSimRootPi0::Class(),this);
   } else {
      R__b.WriteClassBuffer(WCSimRootPi0::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_WCSimRootPi0(void *p) {
      return  p ? new(p) ::WCSimRootPi0 : new ::WCSimRootPi0;
   }
   static void *newArray_WCSimRootPi0(Long_t nElements, void *p) {
      return p ? new(p) ::WCSimRootPi0[nElements] : new ::WCSimRootPi0[nElements];
   }
   // Wrapper around operator delete
   static void delete_WCSimRootPi0(void *p) {
      delete ((::WCSimRootPi0*)p);
   }
   static void deleteArray_WCSimRootPi0(void *p) {
      delete [] ((::WCSimRootPi0*)p);
   }
   static void destruct_WCSimRootPi0(void *p) {
      typedef ::WCSimRootPi0 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WCSimRootPi0

//______________________________________________________________________________
void WCSimRootCaptureGamma::Streamer(TBuffer &R__b)
{
   // Stream an object of class WCSimRootCaptureGamma.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(WCSimRootCaptureGamma::Class(),this);
   } else {
      R__b.WriteClassBuffer(WCSimRootCaptureGamma::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_WCSimRootCaptureGamma(void *p) {
      return  p ? new(p) ::WCSimRootCaptureGamma : new ::WCSimRootCaptureGamma;
   }
   static void *newArray_WCSimRootCaptureGamma(Long_t nElements, void *p) {
      return p ? new(p) ::WCSimRootCaptureGamma[nElements] : new ::WCSimRootCaptureGamma[nElements];
   }
   // Wrapper around operator delete
   static void delete_WCSimRootCaptureGamma(void *p) {
      delete ((::WCSimRootCaptureGamma*)p);
   }
   static void deleteArray_WCSimRootCaptureGamma(void *p) {
      delete [] ((::WCSimRootCaptureGamma*)p);
   }
   static void destruct_WCSimRootCaptureGamma(void *p) {
      typedef ::WCSimRootCaptureGamma current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WCSimRootCaptureGamma

//______________________________________________________________________________
void WCSimRootCapture::Streamer(TBuffer &R__b)
{
   // Stream an object of class WCSimRootCapture.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(WCSimRootCapture::Class(),this);
   } else {
      R__b.WriteClassBuffer(WCSimRootCapture::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_WCSimRootCapture(void *p) {
      return  p ? new(p) ::WCSimRootCapture : new ::WCSimRootCapture;
   }
   static void *newArray_WCSimRootCapture(Long_t nElements, void *p) {
      return p ? new(p) ::WCSimRootCapture[nElements] : new ::WCSimRootCapture[nElements];
   }
   // Wrapper around operator delete
   static void delete_WCSimRootCapture(void *p) {
      delete ((::WCSimRootCapture*)p);
   }
   static void deleteArray_WCSimRootCapture(void *p) {
      delete [] ((::WCSimRootCapture*)p);
   }
   static void destruct_WCSimRootCapture(void *p) {
      typedef ::WCSimRootCapture current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WCSimRootCapture

//______________________________________________________________________________
void WCSimRootTrigger::Streamer(TBuffer &R__b)
{
   // Stream an object of class WCSimRootTrigger.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(WCSimRootTrigger::Class(),this);
   } else {
      R__b.WriteClassBuffer(WCSimRootTrigger::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_WCSimRootTrigger(void *p) {
      return  p ? new(p) ::WCSimRootTrigger : new ::WCSimRootTrigger;
   }
   static void *newArray_WCSimRootTrigger(Long_t nElements, void *p) {
      return p ? new(p) ::WCSimRootTrigger[nElements] : new ::WCSimRootTrigger[nElements];
   }
   // Wrapper around operator delete
   static void delete_WCSimRootTrigger(void *p) {
      delete ((::WCSimRootTrigger*)p);
   }
   static void deleteArray_WCSimRootTrigger(void *p) {
      delete [] ((::WCSimRootTrigger*)p);
   }
   static void destruct_WCSimRootTrigger(void *p) {
      typedef ::WCSimRootTrigger current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WCSimRootTrigger

//______________________________________________________________________________
void WCSimRootEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class WCSimRootEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(WCSimRootEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(WCSimRootEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_WCSimRootEvent(void *p) {
      return  p ? new(p) ::WCSimRootEvent : new ::WCSimRootEvent;
   }
   static void *newArray_WCSimRootEvent(Long_t nElements, void *p) {
      return p ? new(p) ::WCSimRootEvent[nElements] : new ::WCSimRootEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_WCSimRootEvent(void *p) {
      delete ((::WCSimRootEvent*)p);
   }
   static void deleteArray_WCSimRootEvent(void *p) {
      delete [] ((::WCSimRootEvent*)p);
   }
   static void destruct_WCSimRootEvent(void *p) {
      typedef ::WCSimRootEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WCSimRootEvent

//______________________________________________________________________________
void WCSimRootPMT::Streamer(TBuffer &R__b)
{
   // Stream an object of class WCSimRootPMT.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(WCSimRootPMT::Class(),this);
   } else {
      R__b.WriteClassBuffer(WCSimRootPMT::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_WCSimRootPMT(void *p) {
      return  p ? new(p) ::WCSimRootPMT : new ::WCSimRootPMT;
   }
   static void *newArray_WCSimRootPMT(Long_t nElements, void *p) {
      return p ? new(p) ::WCSimRootPMT[nElements] : new ::WCSimRootPMT[nElements];
   }
   // Wrapper around operator delete
   static void delete_WCSimRootPMT(void *p) {
      delete ((::WCSimRootPMT*)p);
   }
   static void deleteArray_WCSimRootPMT(void *p) {
      delete [] ((::WCSimRootPMT*)p);
   }
   static void destruct_WCSimRootPMT(void *p) {
      typedef ::WCSimRootPMT current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WCSimRootPMT

//______________________________________________________________________________
void WCSimRootGeom::Streamer(TBuffer &R__b)
{
   // Stream an object of class WCSimRootGeom.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(WCSimRootGeom::Class(),this);
   } else {
      R__b.WriteClassBuffer(WCSimRootGeom::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_WCSimRootGeom(void *p) {
      return  p ? new(p) ::WCSimRootGeom : new ::WCSimRootGeom;
   }
   static void *newArray_WCSimRootGeom(Long_t nElements, void *p) {
      return p ? new(p) ::WCSimRootGeom[nElements] : new ::WCSimRootGeom[nElements];
   }
   // Wrapper around operator delete
   static void delete_WCSimRootGeom(void *p) {
      delete ((::WCSimRootGeom*)p);
   }
   static void deleteArray_WCSimRootGeom(void *p) {
      delete [] ((::WCSimRootGeom*)p);
   }
   static void destruct_WCSimRootGeom(void *p) {
      typedef ::WCSimRootGeom current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WCSimRootGeom

//______________________________________________________________________________
void WCSimPmtInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class WCSimPmtInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(WCSimPmtInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(WCSimPmtInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_WCSimPmtInfo(void *p) {
      return  p ? new(p) ::WCSimPmtInfo : new ::WCSimPmtInfo;
   }
   static void *newArray_WCSimPmtInfo(Long_t nElements, void *p) {
      return p ? new(p) ::WCSimPmtInfo[nElements] : new ::WCSimPmtInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_WCSimPmtInfo(void *p) {
      delete ((::WCSimPmtInfo*)p);
   }
   static void deleteArray_WCSimPmtInfo(void *p) {
      delete [] ((::WCSimPmtInfo*)p);
   }
   static void destruct_WCSimPmtInfo(void *p) {
      typedef ::WCSimPmtInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WCSimPmtInfo

//______________________________________________________________________________
void WCSimRootOptions::Streamer(TBuffer &R__b)
{
   // Stream an object of class WCSimRootOptions.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(WCSimRootOptions::Class(),this);
   } else {
      R__b.WriteClassBuffer(WCSimRootOptions::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_WCSimRootOptions(void *p) {
      return  p ? new(p) ::WCSimRootOptions : new ::WCSimRootOptions;
   }
   static void *newArray_WCSimRootOptions(Long_t nElements, void *p) {
      return p ? new(p) ::WCSimRootOptions[nElements] : new ::WCSimRootOptions[nElements];
   }
   // Wrapper around operator delete
   static void delete_WCSimRootOptions(void *p) {
      delete ((::WCSimRootOptions*)p);
   }
   static void deleteArray_WCSimRootOptions(void *p) {
      delete [] ((::WCSimRootOptions*)p);
   }
   static void destruct_WCSimRootOptions(void *p) {
      typedef ::WCSimRootOptions current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WCSimRootOptions

//______________________________________________________________________________
void RooTrackerVtxBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooTrackerVtxBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooTrackerVtxBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooTrackerVtxBase::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooTrackerVtxBase(void *p) {
      return  p ? new(p) ::RooTrackerVtxBase : new ::RooTrackerVtxBase;
   }
   static void *newArray_RooTrackerVtxBase(Long_t nElements, void *p) {
      return p ? new(p) ::RooTrackerVtxBase[nElements] : new ::RooTrackerVtxBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooTrackerVtxBase(void *p) {
      delete ((::RooTrackerVtxBase*)p);
   }
   static void deleteArray_RooTrackerVtxBase(void *p) {
      delete [] ((::RooTrackerVtxBase*)p);
   }
   static void destruct_RooTrackerVtxBase(void *p) {
      typedef ::RooTrackerVtxBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RooTrackerVtxBase

//______________________________________________________________________________
void JNuBeamFlux::Streamer(TBuffer &R__b)
{
   // Stream an object of class JNuBeamFlux.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(JNuBeamFlux::Class(),this);
   } else {
      R__b.WriteClassBuffer(JNuBeamFlux::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_JNuBeamFlux(void *p) {
      return  p ? new(p) ::JNuBeamFlux : new ::JNuBeamFlux;
   }
   static void *newArray_JNuBeamFlux(Long_t nElements, void *p) {
      return p ? new(p) ::JNuBeamFlux[nElements] : new ::JNuBeamFlux[nElements];
   }
   // Wrapper around operator delete
   static void delete_JNuBeamFlux(void *p) {
      delete ((::JNuBeamFlux*)p);
   }
   static void deleteArray_JNuBeamFlux(void *p) {
      delete [] ((::JNuBeamFlux*)p);
   }
   static void destruct_JNuBeamFlux(void *p) {
      typedef ::JNuBeamFlux current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::JNuBeamFlux

//______________________________________________________________________________
void NRooTrackerVtx::Streamer(TBuffer &R__b)
{
   // Stream an object of class NRooTrackerVtx.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(NRooTrackerVtx::Class(),this);
   } else {
      R__b.WriteClassBuffer(NRooTrackerVtx::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_NRooTrackerVtx(void *p) {
      return  p ? new(p) ::NRooTrackerVtx : new ::NRooTrackerVtx;
   }
   static void *newArray_NRooTrackerVtx(Long_t nElements, void *p) {
      return p ? new(p) ::NRooTrackerVtx[nElements] : new ::NRooTrackerVtx[nElements];
   }
   // Wrapper around operator delete
   static void delete_NRooTrackerVtx(void *p) {
      delete ((::NRooTrackerVtx*)p);
   }
   static void deleteArray_NRooTrackerVtx(void *p) {
      delete [] ((::NRooTrackerVtx*)p);
   }
   static void destruct_NRooTrackerVtx(void *p) {
      typedef ::NRooTrackerVtx current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::NRooTrackerVtx

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 210,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = 0);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 210,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<float>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<float>*)0x0)->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete ((vector<float>*)p);
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] ((vector<float>*)p);
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<float>

namespace {
  void TriggerDictionaryInitialization_libWCSimRootDict_Impl() {
    static const char* headers[] = {
"/home/s1668863/Dev/WCSim/include/WCSimRootEvent.hh",
"/home/s1668863/Dev/WCSim/include/WCSimRootGeom.hh",
"/home/s1668863/Dev/WCSim/include/WCSimPmtInfo.hh",
"/home/s1668863/Dev/WCSim/include/WCSimEnumerations.hh",
"/home/s1668863/Dev/WCSim/include/WCSimRootOptions.hh",
"/home/s1668863/Dev/WCSim/include/TJNuBeamFlux.hh",
"/home/s1668863/Dev/WCSim/include/TNRooTrackerVtx.hh",
0
    };
    static const char* includePaths[] = {
"/Disk/ds-sopa-group/PPE/software/root/6.08/build/include",
"/home/s1668863/Dev/WCSim/include",
"/home/s1668863/Dev/WCSim/../shared/include",
"/Disk/ds-sopa-group/PPE/software/root/6.08/build/include",
"/Disk/ds-sopa-group/PPE/software/WCSim/nuprism/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libWCSimRootDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$/home/s1668863/Dev/WCSim/include/WCSimRootEvent.hh")))  WCSimEnumerations;
class __attribute__((annotate("$clingAutoload$/home/s1668863/Dev/WCSim/include/WCSimRootEvent.hh")))  WCSimRootTrack;
class __attribute__((annotate("$clingAutoload$/home/s1668863/Dev/WCSim/include/WCSimRootEvent.hh")))  WCSimRootCherenkovHit;
class __attribute__((annotate("$clingAutoload$/home/s1668863/Dev/WCSim/include/WCSimRootEvent.hh")))  WCSimRootCherenkovHitTime;
class __attribute__((annotate("$clingAutoload$/home/s1668863/Dev/WCSim/include/WCSimRootEvent.hh")))  WCSimRootCherenkovDigiHit;
class __attribute__((annotate(R"ATTRDUMP(WCSimRootEvent Header)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$/home/s1668863/Dev/WCSim/include/WCSimRootEvent.hh")))  WCSimRootEventHeader;
class __attribute__((annotate("$clingAutoload$/home/s1668863/Dev/WCSim/include/WCSimRootEvent.hh")))  WCSimRootPi0;
class __attribute__((annotate("$clingAutoload$/home/s1668863/Dev/WCSim/include/WCSimRootEvent.hh")))  WCSimRootCaptureGamma;
class __attribute__((annotate("$clingAutoload$/home/s1668863/Dev/WCSim/include/WCSimRootEvent.hh")))  WCSimRootCapture;
class __attribute__((annotate(R"ATTRDUMP(WCSimRootEvent structure)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$/home/s1668863/Dev/WCSim/include/WCSimRootEvent.hh")))  WCSimRootTrigger;
class __attribute__((annotate("$clingAutoload$/home/s1668863/Dev/WCSim/include/WCSimRootEvent.hh")))  WCSimRootEvent;
class __attribute__((annotate(R"ATTRDUMP(WCSimPMT structure)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$/home/s1668863/Dev/WCSim/include/WCSimRootGeom.hh")))  WCSimRootPMT;
class __attribute__((annotate(R"ATTRDUMP(WCSimRootEvent structure)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$/home/s1668863/Dev/WCSim/include/WCSimRootGeom.hh")))  WCSimRootGeom;
class __attribute__((annotate("$clingAutoload$/home/s1668863/Dev/WCSim/include/WCSimPmtInfo.hh")))  WCSimPmtInfo;
class __attribute__((annotate(R"ATTRDUMP(WCSimRootEvent structure)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$/home/s1668863/Dev/WCSim/include/WCSimRootOptions.hh")))  WCSimRootOptions;
class __attribute__((annotate("$clingAutoload$/home/s1668863/Dev/WCSim/include/TJNuBeamFlux.hh")))  RooTrackerVtxBase;
class __attribute__((annotate("$clingAutoload$/home/s1668863/Dev/WCSim/include/TJNuBeamFlux.hh")))  JNuBeamFlux;
class __attribute__((annotate("$clingAutoload$/home/s1668863/Dev/WCSim/include/TNRooTrackerVtx.hh")))  NRooTrackerVtx;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libWCSimRootDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "/home/s1668863/Dev/WCSim/include/WCSimRootEvent.hh"
#include "/home/s1668863/Dev/WCSim/include/WCSimRootGeom.hh"
#include "/home/s1668863/Dev/WCSim/include/WCSimPmtInfo.hh"
#include "/home/s1668863/Dev/WCSim/include/WCSimEnumerations.hh"
#include "/home/s1668863/Dev/WCSim/include/WCSimRootOptions.hh"
#include "/home/s1668863/Dev/WCSim/include/TJNuBeamFlux.hh"
#include "/home/s1668863/Dev/WCSim/include/TNRooTrackerVtx.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"JNuBeamFlux", payloadCode, "@",
"NRooTrackerVtx", payloadCode, "@",
"RooTrackerVtxBase", payloadCode, "@",
"WCSimEnumerations", payloadCode, "@",
"WCSimPmtInfo", payloadCode, "@",
"WCSimRootCapture", payloadCode, "@",
"WCSimRootCaptureGamma", payloadCode, "@",
"WCSimRootCherenkovDigiHit", payloadCode, "@",
"WCSimRootCherenkovHit", payloadCode, "@",
"WCSimRootCherenkovHitTime", payloadCode, "@",
"WCSimRootEvent", payloadCode, "@",
"WCSimRootEventHeader", payloadCode, "@",
"WCSimRootGeom", payloadCode, "@",
"WCSimRootOptions", payloadCode, "@",
"WCSimRootPMT", payloadCode, "@",
"WCSimRootPi0", payloadCode, "@",
"WCSimRootTrack", payloadCode, "@",
"WCSimRootTrigger", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libWCSimRootDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libWCSimRootDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libWCSimRootDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libWCSimRootDict() {
  TriggerDictionaryInitialization_libWCSimRootDict_Impl();
}
