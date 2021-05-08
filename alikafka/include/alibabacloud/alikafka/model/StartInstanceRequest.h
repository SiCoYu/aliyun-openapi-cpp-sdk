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

#ifndef ALIBABACLOUD_ALIKAFKA_MODEL_STARTINSTANCEREQUEST_H_
#define ALIBABACLOUD_ALIKAFKA_MODEL_STARTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/alikafka/AlikafkaExport.h>

namespace AlibabaCloud
{
	namespace Alikafka
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIKAFKA_EXPORT StartInstanceRequest : public RpcServiceRequest
			{

			public:
				StartInstanceRequest();
				~StartInstanceRequest();

				bool getIsEipInner()const;
				void setIsEipInner(bool isEipInner);
				std::string getSecurityGroup()const;
				void setSecurityGroup(const std::string& securityGroup);
				std::string getDeployModule()const;
				void setDeployModule(const std::string& deployModule);
				bool getIsSetUserAndPassword()const;
				void setIsSetUserAndPassword(bool isSetUserAndPassword);
				std::string getPassword()const;
				void setPassword(const std::string& password);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				bool getCrossZone()const;
				void setCrossZone(bool crossZone);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getServiceVersion()const;
				void setServiceVersion(const std::string& serviceVersion);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getKMSKeyId()const;
				void setKMSKeyId(const std::string& kMSKeyId);
				std::string getConfig()const;
				void setConfig(const std::string& config);
				std::string getUsername()const;
				void setUsername(const std::string& username);

            private:
				bool isEipInner_;
				std::string securityGroup_;
				std::string deployModule_;
				bool isSetUserAndPassword_;
				std::string password_;
				std::string regionId_;
				std::string vSwitchId_;
				std::string instanceId_;
				std::string vpcId_;
				bool crossZone_;
				std::string name_;
				std::string serviceVersion_;
				std::string zoneId_;
				std::string kMSKeyId_;
				std::string config_;
				std::string username_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIKAFKA_MODEL_STARTINSTANCEREQUEST_H_