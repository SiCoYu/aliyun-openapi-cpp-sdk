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

#ifndef ALIBABACLOUD_ECS_MODEL_PURCHASESTORAGECAPACITYUNITREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_PURCHASESTORAGECAPACITYUNITREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT PurchaseStorageCapacityUnitRequest : public RpcServiceRequest
			{

			public:
				PurchaseStorageCapacityUnitRequest();
				~PurchaseStorageCapacityUnitRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				int getCapacity()const;
				void setCapacity(int capacity);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPeriod()const;
				void setPeriod(int period);
				int getAmount()const;
				void setAmount(int amount);
				std::string getFromApp()const;
				void setFromApp(const std::string& fromApp);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getPeriodUnit()const;
				void setPeriodUnit(const std::string& periodUnit);
				std::string getName()const;
				void setName(const std::string& name);

            private:
				long resourceOwnerId_;
				std::string clientToken_;
				std::string description_;
				std::string startTime_;
				int capacity_;
				std::string regionId_;
				int period_;
				int amount_;
				std::string fromApp_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string periodUnit_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_PURCHASESTORAGECAPACITYUNITREQUEST_H_