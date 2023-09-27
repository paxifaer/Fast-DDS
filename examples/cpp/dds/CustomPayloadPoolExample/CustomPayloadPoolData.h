// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file CustomPayloadPoolData.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_CUSTOMPAYLOADPOOLDATA_H_
#define _FAST_DDS_GENERATED_CUSTOMPAYLOADPOOLDATA_H_

#include <array>
#include <bitset>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

#include <fastcdr/cdr/fixed_size_string.hpp>
#include <fastcdr/xcdr/optional.hpp>



#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(CUSTOMPAYLOADPOOLDATA_SOURCE)
#define CUSTOMPAYLOADPOOLDATA_DllAPI __declspec( dllexport )
#else
#define CUSTOMPAYLOADPOOLDATA_DllAPI __declspec( dllimport )
#endif // CUSTOMPAYLOADPOOLDATA_SOURCE
#else
#define CUSTOMPAYLOADPOOLDATA_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define CUSTOMPAYLOADPOOLDATA_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
class CdrSizeCalculator;
} // namespace fastcdr
} // namespace eprosima



/*!
 * @brief This class represents the structure CustomPayloadPoolData defined by the user in the IDL file.
 * @ingroup CustomPayloadPoolData
 */
class CustomPayloadPoolData
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport CustomPayloadPoolData();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~CustomPayloadPoolData();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object CustomPayloadPoolData that will be copied.
     */
    eProsima_user_DllExport CustomPayloadPoolData(
            const CustomPayloadPoolData& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object CustomPayloadPoolData that will be copied.
     */
    eProsima_user_DllExport CustomPayloadPoolData(
            CustomPayloadPoolData&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object CustomPayloadPoolData that will be copied.
     */
    eProsima_user_DllExport CustomPayloadPoolData& operator =(
            const CustomPayloadPoolData& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object CustomPayloadPoolData that will be copied.
     */
    eProsima_user_DllExport CustomPayloadPoolData& operator =(
            CustomPayloadPoolData&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x CustomPayloadPoolData object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const CustomPayloadPoolData& x) const;

    /*!
     * @brief Comparison operator.
     * @param x CustomPayloadPoolData object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const CustomPayloadPoolData& x) const;

    /*!
     * @brief This function sets a value in member index
     * @param _index New value for member index
     */
    eProsima_user_DllExport void index(
            uint32_t _index);

    /*!
     * @brief This function returns the value of member index
     * @return Value of member index
     */
    eProsima_user_DllExport uint32_t index() const;

    /*!
     * @brief This function returns a reference to member index
     * @return Reference to member index
     */
    eProsima_user_DllExport uint32_t& index();


    /*!
     * @brief This function copies the value in member message
     * @param _message New value to be copied in member message
     */
    eProsima_user_DllExport void message(
            const std::string& _message);

    /*!
     * @brief This function moves the value in member message
     * @param _message New value to be moved in member message
     */
    eProsima_user_DllExport void message(
            std::string&& _message);

    /*!
     * @brief This function returns a constant reference to member message
     * @return Constant reference to member message
     */
    eProsima_user_DllExport const std::string& message() const;

    /*!
     * @brief This function returns a reference to member message
     * @return Reference to member message
     */
    eProsima_user_DllExport std::string& message();

private:

    uint32_t m_index{0};
    std::string m_message;

};

#endif // _FAST_DDS_GENERATED_CUSTOMPAYLOADPOOLDATA_H_

