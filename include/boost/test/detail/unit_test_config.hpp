//  (C) Copyright Gennadiy Rozental 2001-2002.
//  Permission to copy, use, modify, sell and distribute this software
//  is granted provided this copyright notice appears in all copies.
//  This software is provided "as is" without express or implied warranty,
//  and with no claim as to its suitability for any purpose.
//
//  See http://www.boost.org for most recent version including documentation.

#ifndef BOOST_UNIT_TEST_CONFIG_HPP
#define BOOST_UNIT_TEST_CONFIG_HPP

// BOOST
#include <boost/config.hpp>

namespace boost {

namespace unit_test_framework {

typedef unsigned long unit_test_counter;

namespace detail {

#ifdef BOOST_NO_STD_DISTANCE
template <class T>
std::ptrdiff_t distance(const T& x, const T& y)
{ 
    std::ptrdiff_t res = 0;

    std::distance( x, y, res );

    return res;
}
#else
using std::distance;
#endif

} // namespace detail

} // namespace unit_test_framework

} // namespace boost

//  Revision History
//   8 Aug 02  Parameters definition separated (Gennadiy Rozental)
//   5 Oct 01  Initial version (Gennadiy Rozental)

#endif // BOOST_UNIT_TEST_CONFIG_HPP
