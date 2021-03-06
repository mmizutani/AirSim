#ifndef MavLinkCom_HighPriorityThread_hpp
#define MavLinkCom_HighPriorityThread_hpp

#include <thread>

namespace common_utils {

	class CurrentThread
	{
	public:
		// make the current thread run with maximum priority.
		static bool setMaximumPriority();

	};

}

#endif