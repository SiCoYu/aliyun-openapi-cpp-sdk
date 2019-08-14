/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_ESS_MODEL_CREATESCALINGGROUPREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_CREATESCALINGGROUPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ess/EssExport.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT CreateScalingGroupRequest : public RpcServiceRequest
			{
				struct LifecycleHook
				{
					std::string defaultResult;
					std::string lifecycleHookName;
					int heartbeatTimeout;
					std::string notificationArn;
					std::string notificationMetadata;
					std::string lifecycleTransition;
				};
				struct VServerGroup
				{
					std::string loadBalancerId;
					RepeatList vServerGroupAttribute;
				};

			public:
				CreateScalingGroupRequest();
				~CreateScalingGroupRequest();

				std::string getLoadBalancerIds()const;
				void setLoadBalancerIds(const std::string& loadBalancerIds);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::vector<std::string> getVSwitchIds()const;
				void setVSwitchIds(const std::vector<std::string>& vSwitchIds);
				int getOnDemandBaseCapacity()const;
				void setOnDemandBaseCapacity(int onDemandBaseCapacity);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getOnDemandPercentageAboveBaseCapacity()const;
				void setOnDemandPercentageAboveBaseCapacity(int onDemandPercentageAboveBaseCapacity);
				bool getSpotInstanceRemedy()const;
				void setSpotInstanceRemedy(bool spotInstanceRemedy);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getDefaultCooldown()const;
				void setDefaultCooldown(int defaultCooldown);
				std::string getRemovalPolicy1()const;
				void setRemovalPolicy1(const std::string& removalPolicy1);
				std::string getRemovalPolicy2()const;
				void setRemovalPolicy2(const std::string& removalPolicy2);
				std::string getMultiAZPolicy()const;
				void setMultiAZPolicy(const std::string& multiAZPolicy);
				std::string getDBInstanceIds()const;
				void setDBInstanceIds(const std::string& dBInstanceIds);
				std::string getLaunchTemplateId()const;
				void setLaunchTemplateId(const std::string& launchTemplateId);
				std::string getHealthCheckType()const;
				void setHealthCheckType(const std::string& healthCheckType);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getScalingGroupName()const;
				void setScalingGroupName(const std::string& scalingGroupName);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getSpotInstancePools()const;
				void setSpotInstancePools(int spotInstancePools);
				int getMinSize()const;
				void setMinSize(int minSize);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getLaunchTemplateVersion()const;
				void setLaunchTemplateVersion(const std::string& launchTemplateVersion);
				std::string getScalingPolicy()const;
				void setScalingPolicy(const std::string& scalingPolicy);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				int getMaxSize()const;
				void setMaxSize(int maxSize);
				std::vector<LifecycleHook> getLifecycleHook()const;
				void setLifecycleHook(const std::vector<LifecycleHook>& lifecycleHook);
				std::vector<VServerGroup> getVServerGroup()const;
				void setVServerGroup(const std::vector<VServerGroup>& vServerGroup);

            private:
				std::string loadBalancerIds_;
				std::string clientToken_;
				std::vector<std::string> vSwitchIds_;
				int onDemandBaseCapacity_;
				std::string accessKeyId_;
				int onDemandPercentageAboveBaseCapacity_;
				bool spotInstanceRemedy_;
				std::string regionId_;
				int defaultCooldown_;
				std::string removalPolicy1_;
				std::string removalPolicy2_;
				std::string multiAZPolicy_;
				std::string dBInstanceIds_;
				std::string launchTemplateId_;
				std::string healthCheckType_;
				std::string resourceOwnerAccount_;
				std::string scalingGroupName_;
				std::string ownerAccount_;
				int spotInstancePools_;
				int minSize_;
				long ownerId_;
				std::string launchTemplateVersion_;
				std::string scalingPolicy_;
				std::string vSwitchId_;
				int maxSize_;
				std::vector<LifecycleHook> lifecycleHook_;
				std::vector<VServerGroup> vServerGroup_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_CREATESCALINGGROUPREQUEST_H_