﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/model/TerminologyProperties.h>
#include <aws/translate/model/TerminologyDataLocation.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Translate
{
namespace Model
{
  class AWS_TRANSLATE_API GetTerminologyResult
  {
  public:
    GetTerminologyResult();
    GetTerminologyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetTerminologyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The properties of the custom terminology being retrieved.</p>
     */
    inline const TerminologyProperties& GetTerminologyProperties() const{ return m_terminologyProperties; }

    /**
     * <p>The properties of the custom terminology being retrieved.</p>
     */
    inline void SetTerminologyProperties(const TerminologyProperties& value) { m_terminologyProperties = value; }

    /**
     * <p>The properties of the custom terminology being retrieved.</p>
     */
    inline void SetTerminologyProperties(TerminologyProperties&& value) { m_terminologyProperties = std::move(value); }

    /**
     * <p>The properties of the custom terminology being retrieved.</p>
     */
    inline GetTerminologyResult& WithTerminologyProperties(const TerminologyProperties& value) { SetTerminologyProperties(value); return *this;}

    /**
     * <p>The properties of the custom terminology being retrieved.</p>
     */
    inline GetTerminologyResult& WithTerminologyProperties(TerminologyProperties&& value) { SetTerminologyProperties(std::move(value)); return *this;}


    /**
     * <p>The data location of the custom terminology being retrieved. The custom
     * terminology file is returned in a presigned url that has a 30 minute
     * expiration.</p>
     */
    inline const TerminologyDataLocation& GetTerminologyDataLocation() const{ return m_terminologyDataLocation; }

    /**
     * <p>The data location of the custom terminology being retrieved. The custom
     * terminology file is returned in a presigned url that has a 30 minute
     * expiration.</p>
     */
    inline void SetTerminologyDataLocation(const TerminologyDataLocation& value) { m_terminologyDataLocation = value; }

    /**
     * <p>The data location of the custom terminology being retrieved. The custom
     * terminology file is returned in a presigned url that has a 30 minute
     * expiration.</p>
     */
    inline void SetTerminologyDataLocation(TerminologyDataLocation&& value) { m_terminologyDataLocation = std::move(value); }

    /**
     * <p>The data location of the custom terminology being retrieved. The custom
     * terminology file is returned in a presigned url that has a 30 minute
     * expiration.</p>
     */
    inline GetTerminologyResult& WithTerminologyDataLocation(const TerminologyDataLocation& value) { SetTerminologyDataLocation(value); return *this;}

    /**
     * <p>The data location of the custom terminology being retrieved. The custom
     * terminology file is returned in a presigned url that has a 30 minute
     * expiration.</p>
     */
    inline GetTerminologyResult& WithTerminologyDataLocation(TerminologyDataLocation&& value) { SetTerminologyDataLocation(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to create a terminology resource. The location is returned as a
     * presigned URL to that has a 30 minute expiration.</p>
     */
    inline const TerminologyDataLocation& GetAuxiliaryDataLocation() const{ return m_auxiliaryDataLocation; }

    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to create a terminology resource. The location is returned as a
     * presigned URL to that has a 30 minute expiration.</p>
     */
    inline void SetAuxiliaryDataLocation(const TerminologyDataLocation& value) { m_auxiliaryDataLocation = value; }

    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to create a terminology resource. The location is returned as a
     * presigned URL to that has a 30 minute expiration.</p>
     */
    inline void SetAuxiliaryDataLocation(TerminologyDataLocation&& value) { m_auxiliaryDataLocation = std::move(value); }

    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to create a terminology resource. The location is returned as a
     * presigned URL to that has a 30 minute expiration.</p>
     */
    inline GetTerminologyResult& WithAuxiliaryDataLocation(const TerminologyDataLocation& value) { SetAuxiliaryDataLocation(value); return *this;}

    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to create a terminology resource. The location is returned as a
     * presigned URL to that has a 30 minute expiration.</p>
     */
    inline GetTerminologyResult& WithAuxiliaryDataLocation(TerminologyDataLocation&& value) { SetAuxiliaryDataLocation(std::move(value)); return *this;}

  private:

    TerminologyProperties m_terminologyProperties;

    TerminologyDataLocation m_terminologyDataLocation;

    TerminologyDataLocation m_auxiliaryDataLocation;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
