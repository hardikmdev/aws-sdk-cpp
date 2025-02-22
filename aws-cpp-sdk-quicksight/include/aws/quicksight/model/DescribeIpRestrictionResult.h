﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace QuickSight
{
namespace Model
{
  class AWS_QUICKSIGHT_API DescribeIpRestrictionResult
  {
  public:
    DescribeIpRestrictionResult();
    DescribeIpRestrictionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeIpRestrictionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Your AWS account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>Your AWS account ID.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountId = value; }

    /**
     * <p>Your AWS account ID.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountId = std::move(value); }

    /**
     * <p>Your AWS account ID.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountId.assign(value); }

    /**
     * <p>Your AWS account ID.</p>
     */
    inline DescribeIpRestrictionResult& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>Your AWS account ID.</p>
     */
    inline DescribeIpRestrictionResult& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>Your AWS account ID.</p>
     */
    inline DescribeIpRestrictionResult& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>Describes the IP rules with CIDR range and description.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetIpRestrictionRuleMap() const{ return m_ipRestrictionRuleMap; }

    /**
     * <p>Describes the IP rules with CIDR range and description.</p>
     */
    inline void SetIpRestrictionRuleMap(const Aws::Map<Aws::String, Aws::String>& value) { m_ipRestrictionRuleMap = value; }

    /**
     * <p>Describes the IP rules with CIDR range and description.</p>
     */
    inline void SetIpRestrictionRuleMap(Aws::Map<Aws::String, Aws::String>&& value) { m_ipRestrictionRuleMap = std::move(value); }

    /**
     * <p>Describes the IP rules with CIDR range and description.</p>
     */
    inline DescribeIpRestrictionResult& WithIpRestrictionRuleMap(const Aws::Map<Aws::String, Aws::String>& value) { SetIpRestrictionRuleMap(value); return *this;}

    /**
     * <p>Describes the IP rules with CIDR range and description.</p>
     */
    inline DescribeIpRestrictionResult& WithIpRestrictionRuleMap(Aws::Map<Aws::String, Aws::String>&& value) { SetIpRestrictionRuleMap(std::move(value)); return *this;}

    /**
     * <p>Describes the IP rules with CIDR range and description.</p>
     */
    inline DescribeIpRestrictionResult& AddIpRestrictionRuleMap(const Aws::String& key, const Aws::String& value) { m_ipRestrictionRuleMap.emplace(key, value); return *this; }

    /**
     * <p>Describes the IP rules with CIDR range and description.</p>
     */
    inline DescribeIpRestrictionResult& AddIpRestrictionRuleMap(Aws::String&& key, const Aws::String& value) { m_ipRestrictionRuleMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Describes the IP rules with CIDR range and description.</p>
     */
    inline DescribeIpRestrictionResult& AddIpRestrictionRuleMap(const Aws::String& key, Aws::String&& value) { m_ipRestrictionRuleMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Describes the IP rules with CIDR range and description.</p>
     */
    inline DescribeIpRestrictionResult& AddIpRestrictionRuleMap(Aws::String&& key, Aws::String&& value) { m_ipRestrictionRuleMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Describes the IP rules with CIDR range and description.</p>
     */
    inline DescribeIpRestrictionResult& AddIpRestrictionRuleMap(const char* key, Aws::String&& value) { m_ipRestrictionRuleMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Describes the IP rules with CIDR range and description.</p>
     */
    inline DescribeIpRestrictionResult& AddIpRestrictionRuleMap(Aws::String&& key, const char* value) { m_ipRestrictionRuleMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Describes the IP rules with CIDR range and description.</p>
     */
    inline DescribeIpRestrictionResult& AddIpRestrictionRuleMap(const char* key, const char* value) { m_ipRestrictionRuleMap.emplace(key, value); return *this; }


    /**
     * <p>Whether or not IP rules are enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether or not IP rules are enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabled = value; }

    /**
     * <p>Whether or not IP rules are enabled.</p>
     */
    inline DescribeIpRestrictionResult& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The ID of the describe request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The ID of the describe request.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The ID of the describe request.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The ID of the describe request.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The ID of the describe request.</p>
     */
    inline DescribeIpRestrictionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The ID of the describe request.</p>
     */
    inline DescribeIpRestrictionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The ID of the describe request.</p>
     */
    inline DescribeIpRestrictionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The status of a set of IP restrictions. A successful request returns a 200
     * status code.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The status of a set of IP restrictions. A successful request returns a 200
     * status code.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The status of a set of IP restrictions. A successful request returns a 200
     * status code.</p>
     */
    inline DescribeIpRestrictionResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::String m_awsAccountId;

    Aws::Map<Aws::String, Aws::String> m_ipRestrictionRuleMap;

    bool m_enabled;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
