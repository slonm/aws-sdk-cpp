﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/rbin/RecycleBinRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rbin/model/RetentionPeriod.h>
#include <aws/rbin/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rbin/model/ResourceTag.h>
#include <utility>

namespace Aws
{
namespace RecycleBin
{
namespace Model
{

  /**
   */
  class AWS_RECYCLEBIN_API UpdateRuleRequest : public RecycleBinRequest
  {
  public:
    UpdateRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRule"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID of the retention rule to update.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The unique ID of the retention rule to update.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The unique ID of the retention rule to update.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The unique ID of the retention rule to update.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The unique ID of the retention rule to update.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The unique ID of the retention rule to update.</p>
     */
    inline UpdateRuleRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The unique ID of the retention rule to update.</p>
     */
    inline UpdateRuleRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the retention rule to update.</p>
     */
    inline UpdateRuleRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline const RetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline void SetRetentionPeriod(const RetentionPeriod& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline void SetRetentionPeriod(RetentionPeriod&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::move(value); }

    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline UpdateRuleRequest& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}

    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline UpdateRuleRequest& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}


    /**
     * <p>The retention rule description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The retention rule description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The retention rule description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The retention rule description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The retention rule description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The retention rule description.</p>
     */
    inline UpdateRuleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The retention rule description.</p>
     */
    inline UpdateRuleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The retention rule description.</p>
     */
    inline UpdateRuleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The resource type to be retained by the retention rule. Currently, only
     * Amazon EBS snapshots are supported.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type to be retained by the retention rule. Currently, only
     * Amazon EBS snapshots are supported.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type to be retained by the retention rule. Currently, only
     * Amazon EBS snapshots are supported.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type to be retained by the retention rule. Currently, only
     * Amazon EBS snapshots are supported.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type to be retained by the retention rule. Currently, only
     * Amazon EBS snapshots are supported.</p>
     */
    inline UpdateRuleRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type to be retained by the retention rule. Currently, only
     * Amazon EBS snapshots are supported.</p>
     */
    inline UpdateRuleRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>Information about the resource tags to use to identify resources that are to
     * be retained by the retention rule. The retention rule retains only deleted
     * snapshots that have one or more of the specified tag key and value pairs. If a
     * snapshot is deleted, but it does not have any of the specified tag key and value
     * pairs, it is immediately deleted without being retained by the retention rule.
     * </p> <p>You can add the same tag key and value pair to a maximum or five
     * retention rules.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const{ return m_resourceTags; }

    /**
     * <p>Information about the resource tags to use to identify resources that are to
     * be retained by the retention rule. The retention rule retains only deleted
     * snapshots that have one or more of the specified tag key and value pairs. If a
     * snapshot is deleted, but it does not have any of the specified tag key and value
     * pairs, it is immediately deleted without being retained by the retention rule.
     * </p> <p>You can add the same tag key and value pair to a maximum or five
     * retention rules.</p>
     */
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }

    /**
     * <p>Information about the resource tags to use to identify resources that are to
     * be retained by the retention rule. The retention rule retains only deleted
     * snapshots that have one or more of the specified tag key and value pairs. If a
     * snapshot is deleted, but it does not have any of the specified tag key and value
     * pairs, it is immediately deleted without being retained by the retention rule.
     * </p> <p>You can add the same tag key and value pair to a maximum or five
     * retention rules.</p>
     */
    inline void SetResourceTags(const Aws::Vector<ResourceTag>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }

    /**
     * <p>Information about the resource tags to use to identify resources that are to
     * be retained by the retention rule. The retention rule retains only deleted
     * snapshots that have one or more of the specified tag key and value pairs. If a
     * snapshot is deleted, but it does not have any of the specified tag key and value
     * pairs, it is immediately deleted without being retained by the retention rule.
     * </p> <p>You can add the same tag key and value pair to a maximum or five
     * retention rules.</p>
     */
    inline void SetResourceTags(Aws::Vector<ResourceTag>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }

    /**
     * <p>Information about the resource tags to use to identify resources that are to
     * be retained by the retention rule. The retention rule retains only deleted
     * snapshots that have one or more of the specified tag key and value pairs. If a
     * snapshot is deleted, but it does not have any of the specified tag key and value
     * pairs, it is immediately deleted without being retained by the retention rule.
     * </p> <p>You can add the same tag key and value pair to a maximum or five
     * retention rules.</p>
     */
    inline UpdateRuleRequest& WithResourceTags(const Aws::Vector<ResourceTag>& value) { SetResourceTags(value); return *this;}

    /**
     * <p>Information about the resource tags to use to identify resources that are to
     * be retained by the retention rule. The retention rule retains only deleted
     * snapshots that have one or more of the specified tag key and value pairs. If a
     * snapshot is deleted, but it does not have any of the specified tag key and value
     * pairs, it is immediately deleted without being retained by the retention rule.
     * </p> <p>You can add the same tag key and value pair to a maximum or five
     * retention rules.</p>
     */
    inline UpdateRuleRequest& WithResourceTags(Aws::Vector<ResourceTag>&& value) { SetResourceTags(std::move(value)); return *this;}

    /**
     * <p>Information about the resource tags to use to identify resources that are to
     * be retained by the retention rule. The retention rule retains only deleted
     * snapshots that have one or more of the specified tag key and value pairs. If a
     * snapshot is deleted, but it does not have any of the specified tag key and value
     * pairs, it is immediately deleted without being retained by the retention rule.
     * </p> <p>You can add the same tag key and value pair to a maximum or five
     * retention rules.</p>
     */
    inline UpdateRuleRequest& AddResourceTags(const ResourceTag& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(value); return *this; }

    /**
     * <p>Information about the resource tags to use to identify resources that are to
     * be retained by the retention rule. The retention rule retains only deleted
     * snapshots that have one or more of the specified tag key and value pairs. If a
     * snapshot is deleted, but it does not have any of the specified tag key and value
     * pairs, it is immediately deleted without being retained by the retention rule.
     * </p> <p>You can add the same tag key and value pair to a maximum or five
     * retention rules.</p>
     */
    inline UpdateRuleRequest& AddResourceTags(ResourceTag&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet;

    RetentionPeriod m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::Vector<ResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet;
  };

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
