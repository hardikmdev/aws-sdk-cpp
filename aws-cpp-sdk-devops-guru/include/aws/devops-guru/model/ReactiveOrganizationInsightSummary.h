﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/InsightSeverity.h>
#include <aws/devops-guru/model/InsightStatus.h>
#include <aws/devops-guru/model/InsightTimeRange.h>
#include <aws/devops-guru/model/ResourceCollection.h>
#include <aws/devops-guru/model/ServiceCollection.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p>Information about a reactive insight. This object is returned by
   * <code>DescribeInsight</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ReactiveOrganizationInsightSummary">AWS
   * API Reference</a></p>
   */
  class AWS_DEVOPSGURU_API ReactiveOrganizationInsightSummary
  {
  public:
    ReactiveOrganizationInsightSummary();
    ReactiveOrganizationInsightSummary(Aws::Utils::Json::JsonView jsonValue);
    ReactiveOrganizationInsightSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the insight summary.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the insight summary.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the insight summary.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the insight summary.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the insight summary.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the insight summary.</p>
     */
    inline ReactiveOrganizationInsightSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the insight summary.</p>
     */
    inline ReactiveOrganizationInsightSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the insight summary.</p>
     */
    inline ReactiveOrganizationInsightSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline ReactiveOrganizationInsightSummary& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline ReactiveOrganizationInsightSummary& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline ReactiveOrganizationInsightSummary& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline const Aws::String& GetOrganizationalUnitId() const{ return m_organizationalUnitId; }

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline void SetOrganizationalUnitId(const Aws::String& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = value; }

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline void SetOrganizationalUnitId(Aws::String&& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = std::move(value); }

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline void SetOrganizationalUnitId(const char* value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId.assign(value); }

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline ReactiveOrganizationInsightSummary& WithOrganizationalUnitId(const Aws::String& value) { SetOrganizationalUnitId(value); return *this;}

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline ReactiveOrganizationInsightSummary& WithOrganizationalUnitId(Aws::String&& value) { SetOrganizationalUnitId(std::move(value)); return *this;}

    /**
     * <p>The ID of the organizational unit.</p>
     */
    inline ReactiveOrganizationInsightSummary& WithOrganizationalUnitId(const char* value) { SetOrganizationalUnitId(value); return *this;}


    /**
     * <p>The name of the insight summary.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the insight summary.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the insight summary.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the insight summary.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the insight summary.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the insight summary.</p>
     */
    inline ReactiveOrganizationInsightSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the insight summary.</p>
     */
    inline ReactiveOrganizationInsightSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the insight summary.</p>
     */
    inline ReactiveOrganizationInsightSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> An array of severity values used to search for insights. </p>
     */
    inline const InsightSeverity& GetSeverity() const{ return m_severity; }

    /**
     * <p> An array of severity values used to search for insights. </p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p> An array of severity values used to search for insights. </p>
     */
    inline void SetSeverity(const InsightSeverity& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p> An array of severity values used to search for insights. </p>
     */
    inline void SetSeverity(InsightSeverity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p> An array of severity values used to search for insights. </p>
     */
    inline ReactiveOrganizationInsightSummary& WithSeverity(const InsightSeverity& value) { SetSeverity(value); return *this;}

    /**
     * <p> An array of severity values used to search for insights. </p>
     */
    inline ReactiveOrganizationInsightSummary& WithSeverity(InsightSeverity&& value) { SetSeverity(std::move(value)); return *this;}


    /**
     * <p> An array of status values used to search for insights. </p>
     */
    inline const InsightStatus& GetStatus() const{ return m_status; }

    /**
     * <p> An array of status values used to search for insights. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> An array of status values used to search for insights. </p>
     */
    inline void SetStatus(const InsightStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> An array of status values used to search for insights. </p>
     */
    inline void SetStatus(InsightStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> An array of status values used to search for insights. </p>
     */
    inline ReactiveOrganizationInsightSummary& WithStatus(const InsightStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> An array of status values used to search for insights. </p>
     */
    inline ReactiveOrganizationInsightSummary& WithStatus(InsightStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const InsightTimeRange& GetInsightTimeRange() const{ return m_insightTimeRange; }

    
    inline bool InsightTimeRangeHasBeenSet() const { return m_insightTimeRangeHasBeenSet; }

    
    inline void SetInsightTimeRange(const InsightTimeRange& value) { m_insightTimeRangeHasBeenSet = true; m_insightTimeRange = value; }

    
    inline void SetInsightTimeRange(InsightTimeRange&& value) { m_insightTimeRangeHasBeenSet = true; m_insightTimeRange = std::move(value); }

    
    inline ReactiveOrganizationInsightSummary& WithInsightTimeRange(const InsightTimeRange& value) { SetInsightTimeRange(value); return *this;}

    
    inline ReactiveOrganizationInsightSummary& WithInsightTimeRange(InsightTimeRange&& value) { SetInsightTimeRange(std::move(value)); return *this;}


    
    inline const ResourceCollection& GetResourceCollection() const{ return m_resourceCollection; }

    
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }

    
    inline void SetResourceCollection(const ResourceCollection& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = value; }

    
    inline void SetResourceCollection(ResourceCollection&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::move(value); }

    
    inline ReactiveOrganizationInsightSummary& WithResourceCollection(const ResourceCollection& value) { SetResourceCollection(value); return *this;}

    
    inline ReactiveOrganizationInsightSummary& WithResourceCollection(ResourceCollection&& value) { SetResourceCollection(std::move(value)); return *this;}


    
    inline const ServiceCollection& GetServiceCollection() const{ return m_serviceCollection; }

    
    inline bool ServiceCollectionHasBeenSet() const { return m_serviceCollectionHasBeenSet; }

    
    inline void SetServiceCollection(const ServiceCollection& value) { m_serviceCollectionHasBeenSet = true; m_serviceCollection = value; }

    
    inline void SetServiceCollection(ServiceCollection&& value) { m_serviceCollectionHasBeenSet = true; m_serviceCollection = std::move(value); }

    
    inline ReactiveOrganizationInsightSummary& WithServiceCollection(const ServiceCollection& value) { SetServiceCollection(value); return *this;}

    
    inline ReactiveOrganizationInsightSummary& WithServiceCollection(ServiceCollection&& value) { SetServiceCollection(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_organizationalUnitId;
    bool m_organizationalUnitIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    InsightSeverity m_severity;
    bool m_severityHasBeenSet;

    InsightStatus m_status;
    bool m_statusHasBeenSet;

    InsightTimeRange m_insightTimeRange;
    bool m_insightTimeRangeHasBeenSet;

    ResourceCollection m_resourceCollection;
    bool m_resourceCollectionHasBeenSet;

    ServiceCollection m_serviceCollection;
    bool m_serviceCollectionHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
