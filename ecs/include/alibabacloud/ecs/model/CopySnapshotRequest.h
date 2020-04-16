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

#ifndef ALIBABACLOUD_ECS_MODEL_COPYSNAPSHOTREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_COPYSNAPSHOTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT CopySnapshotRequest : public RpcServiceRequest
			{
			public:
				struct Tag
				{
					std::string key;
					std::string value;
				};

			public:
				CopySnapshotRequest();
				~CopySnapshotRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSnapshotId()const;
				void setSnapshotId(const std::string& snapshotId);
				std::string getDestinationRegionId()const;
				void setDestinationRegionId(const std::string& destinationRegionId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getDestinationSnapshotName()const;
				void setDestinationSnapshotName(const std::string& destinationSnapshotName);
				std::string getDestinationSnapshotDescription()const;
				void setDestinationSnapshotDescription(const std::string& destinationSnapshotDescription);
				int getRetentionDays()const;
				void setRetentionDays(int retentionDays);

            private:
				long resourceOwnerId_;
				std::string snapshotId_;
				std::string destinationRegionId_;
				std::string regionId_;
				std::vector<Tag> tag_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string destinationSnapshotName_;
				std::string destinationSnapshotDescription_;
				int retentionDays_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_COPYSNAPSHOTREQUEST_H_