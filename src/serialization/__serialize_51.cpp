
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */
#if defined SERIALIZATION_ENABLED
#include "fertilized/global.h"

#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/serialization/version.hpp>

#include "fertilized/features/differencesurfacecalculator.h"
#include "fertilized/serialization/_serialization_definition.h"

namespace fertilized {
  template <class Archive>
  void __serialization_register_51(Archive &ar,
                                          const bool &always_register,
                                          const unsigned int &serialization_library_version) {
    if (0 > FERTILIZED_LIB_VERSION()) {
        throw Fertilized_Exception("The serialization generation of the class "
          "DifferenceSurfaceCalculator is higher than the current library version "
          "(0 > " + std::to_string(FERTILIZED_LIB_VERSION()) +
          ")! This will break serialization! Raise the library version in the file "
          "'global.h' to at least 0!");
    }
    if (always_register ||
        serialization_library_version >= 0) {
      ar.template register_type<DifferenceSurfaceCalculator<
              uint8_t,
              int16_t,
              uint
	  >>();
    }
  };
  TemplateFuncExport DllExport void __serialization_register_51(
      boost::archive::text_iarchive &ar,
      const bool &always_register,
      const unsigned int &serialization_library_version);
  TemplateFuncExport DllExport void __serialization_register_51(
      boost::archive::text_oarchive &ar,
      const bool &always_register,
      const unsigned int &serialization_library_version);

    TemplateFuncExport DllExport std::string serialize(const DifferenceSurfaceCalculator<
              uint8_t,
              int16_t,
              uint
	  > *, const bool &);
    TemplateFuncExport DllExport DifferenceSurfaceCalculator<
              uint8_t,
              int16_t,
              uint
	  >* deserialize(std::stringstream &);
    TemplateFuncExport DllExport void deserialize(std::stringstream &, DifferenceSurfaceCalculator<
              uint8_t,
              int16_t,
              uint
	  >*);
}  // namespace fertilized

// For types, etc.
using namespace fertilized;
namespace boost {
namespace serialization {

template <>
struct version<DifferenceSurfaceCalculator<
              uint8_t,
              int16_t,
              uint
	  >> {
    typedef mpl::int_<FERTILIZED_VERSION_COUNT> type;
    typedef mpl::integral_c_tag tag;
    BOOST_STATIC_CONSTANT(int, value = version::type::value);
    BOOST_MPL_ASSERT((
        boost::mpl::less<
            boost::mpl::int_<FERTILIZED_VERSION_COUNT>,
            boost::mpl::int_<256>
        >
    ));
};
}
}

#endif  // SERIALIZATION_ENABLED