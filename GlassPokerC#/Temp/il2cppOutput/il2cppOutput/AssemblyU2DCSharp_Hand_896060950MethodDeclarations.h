#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Hand
struct Hand_t_896060950_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t_1321712961_0;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t_293602512_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Hand::.ctor(System.String[])
extern "C"  void Hand__ctor_m1321496884_0 (Hand_t_896060950_0 * __this, StringU5BU5D_t_816028754_0* ___cArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> Hand::cardsToSuitlessIntRanksList(System.String[])
extern "C"  List_1_t_1321712961_0 * Hand_cardsToSuitlessIntRanksList_m367810014_0 (Hand_t_896060950_0 * __this, StringU5BU5D_t_816028754_0* ___cardsToBeIntRanked, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Hand::getFlushSuit()
extern "C"  String_t* Hand_getFlushSuit_m275408662_0 (Hand_t_896060950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Hand::checkForMultiples()
extern "C"  double Hand_checkForMultiples_m_1931840535_0 (Hand_t_896060950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> Hand::getFlushCards(System.String)
extern "C"  List_1_t_293602512_0 * Hand_getFlushCards_m1198056052_0 (Hand_t_896060950_0 * __this, String_t* ___flushSuit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Hand::checkForFlush()
extern "C"  double Hand_checkForFlush_m1383454922_0 (Hand_t_896060950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Hand::checkForStraight()
extern "C"  double Hand_checkForStraight_m525106582_0 (Hand_t_896060950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Hand::checkForStraightFlush()
extern "C"  double Hand_checkForStraightFlush_m_1981365392_0 (Hand_t_896060950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Hand::Start()
extern "C"  void Hand_Start_m618438636_0 (Hand_t_896060950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Hand::Update()
extern "C"  void Hand_Update_m1997580705_0 (Hand_t_896060950_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
