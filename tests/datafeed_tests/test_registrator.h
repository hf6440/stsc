#include <boost/test/test_tools.hpp>

namespace stsc
{
	namespace tests_
	{
		namespace datafeed
		{
			namespace binary
			{
				void period_header_sizeof_tests();
				void period_constructor_tests();

				void write_read_unit_tests();
			}
			namespace csv
			{
				void yahoo_finance_reader_constructor_tests();
				void yahoo_finance_reader_unit_tests();
				void yahoo_finance_to_binary_data_unit_tests();
				void yahoo_finance_to_binary_data_integration_tests();

				void yahoo_finance_reader_performance_tests();
			}
		}
	}
}
