/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /Users/Ragna/Documents/Appcelerator_Studio_Workspace/macaddress/android/build/generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/Users/Ragna/Documents/Appcelerator_Studio_Workspace/macaddress/android/build/generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.ibilis.macaddress.ExampleProxy.h"
#include "com.ibilis.macaddress.MacaddressModule.h"


namespace titanium {
namespace bindings {
#line 16 "/Users/Ragna/Documents/Appcelerator_Studio_Workspace/macaddress/android/build/generated/KrollGeneratedBindings.gperf"
struct BindEntry;
/* maximum key range = 5, duplicates = 0 */

class MacaddressBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
MacaddressBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct BindEntry *
MacaddressBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 34,
      MAX_WORD_LENGTH = 38,
      MIN_HASH_VALUE = 34,
      MAX_HASH_VALUE = 38
    };

  static struct BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 19 "/Users/Ragna/Documents/Appcelerator_Studio_Workspace/macaddress/android/build/generated/KrollGeneratedBindings.gperf"
      {"com.ibilis.macaddress.ExampleProxy",::com::ibilis::macaddress::macaddress::ExampleProxy::bindProxy,::com::ibilis::macaddress::macaddress::ExampleProxy::dispose},
      {""}, {""}, {""},
#line 18 "/Users/Ragna/Documents/Appcelerator_Studio_Workspace/macaddress/android/build/generated/KrollGeneratedBindings.gperf"
      {"com.ibilis.macaddress.MacaddressModule",::com::ibilis::macaddress::MacaddressModule::bindProxy,::com::ibilis::macaddress::MacaddressModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 20 "/Users/Ragna/Documents/Appcelerator_Studio_Workspace/macaddress/android/build/generated/KrollGeneratedBindings.gperf"

}
}
