#ifndef _STSC_DATAFEED_DATAFEED_PROCESSOR_H_
#define _STSC_DATAFEED_DATAFEED_PROCESSOR_H_

#include <string>

#include <boost/noncopyable.hpp>
#include <boost/shared_ptr.hpp>

#include <bar_types.h>

namespace stsc
{
	namespace datafeed
	{
		class datafeed_processor : virtual protected boost::noncopyable
		{
		public:
			explicit datafeed_processor();
			virtual ~datafeed_processor();
			virtual void process_bar( const boost::shared_ptr< std::string >& stock_name, const common::price_bar& new_bar ) = 0;
			virtual void error_process( const std::string& reason, const std::string& file_path ) = 0;
		};
	}
}


#endif // _STSC_DATAFEED_DATAFEED_PROCESSOR_H_

