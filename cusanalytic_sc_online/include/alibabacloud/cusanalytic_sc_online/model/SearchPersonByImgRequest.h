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

#ifndef ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_SEARCHPERSONBYIMGREQUEST_H_
#define ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_SEARCHPERSONBYIMGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cusanalytic_sc_online/Cusanalytic_sc_onlineExport.h>

namespace AlibabaCloud
{
	namespace Cusanalytic_sc_online
	{
		namespace Model
		{
			class ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_EXPORT SearchPersonByImgRequest : public RpcServiceRequest
			{

			public:
				SearchPersonByImgRequest();
				~SearchPersonByImgRequest();

				long getStoreId()const;
				void setStoreId(long storeId);
				std::string getImgUrl()const;
				void setImgUrl(const std::string& imgUrl);

            private:
				long storeId_;
				std::string imgUrl_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_SEARCHPERSONBYIMGREQUEST_H_