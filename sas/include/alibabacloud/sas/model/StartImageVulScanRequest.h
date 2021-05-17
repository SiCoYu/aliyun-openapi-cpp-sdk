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

#ifndef ALIBABACLOUD_SAS_MODEL_STARTIMAGEVULSCANREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_STARTIMAGEVULSCANREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT StartImageVulScanRequest : public RpcServiceRequest
			{

			public:
				StartImageVulScanRequest();
				~StartImageVulScanRequest();

				std::string getRepoId()const;
				void setRepoId(const std::string& repoId);
				std::string getRepoNamespace()const;
				void setRepoNamespace(const std::string& repoNamespace);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getImageDigest()const;
				void setImageDigest(const std::string& imageDigest);
				std::string getRepName()const;
				void setRepName(const std::string& repName);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getImageTag()const;
				void setImageTag(const std::string& imageTag);
				std::vector<std::string> getRegistryTypes()const;
				void setRegistryTypes(const std::vector<std::string>& registryTypes);
				std::string getRepoInstanceId()const;
				void setRepoInstanceId(const std::string& repoInstanceId);
				std::string getImageLayer()const;
				void setImageLayer(const std::string& imageLayer);
				std::string getRepoRegionId()const;
				void setRepoRegionId(const std::string& repoRegionId);

            private:
				std::string repoId_;
				std::string repoNamespace_;
				std::string sourceIp_;
				std::string imageDigest_;
				std::string repName_;
				std::string lang_;
				std::string imageTag_;
				std::vector<std::string> registryTypes_;
				std::string repoInstanceId_;
				std::string imageLayer_;
				std::string repoRegionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_STARTIMAGEVULSCANREQUEST_H_