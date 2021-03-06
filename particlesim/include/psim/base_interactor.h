#ifndef _PSIM_BASE_INTERACTOR_
#define _PSIM_BASE_INTERACTOR_

#include <utility>
#include <psim/particle.h>

//CPU_TP32
namespace psim{
    namespace interactors {
        class BaseInteractor
        {
        public:
            using result = std::pair<vec::vec3f, bool>;
            virtual ~BaseInteractor() = default;

			//CPU_TP39
            virtual result computeAcceleration(const particle & p) = 0; 
            virtual BaseInteractor* clone() const = 0;
        };
    }
}

#endif
