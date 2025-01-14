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

#ifndef ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTINSTANCEINDICESREQUEST_H_
#define ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTINSTANCEINDICESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/elasticsearch/ElasticsearchExport.h>

namespace AlibabaCloud
{
	namespace Elasticsearch
	{
		namespace Model
		{
			class ALIBABACLOUD_ELASTICSEARCH_EXPORT ListInstanceIndicesRequest : public RoaServiceRequest
			{

			public:
				ListInstanceIndicesRequest();
				~ListInstanceIndicesRequest();

				bool getAll()const;
				void setAll(bool all);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				bool getIsManaged()const;
				void setIsManaged(bool isManaged);
				int getSize()const;
				void setSize(int size);
				std::string getName()const;
				void setName(const std::string& name);
				int getPage()const;
				void setPage(int page);
				bool getIsOpenstore()const;
				void setIsOpenstore(bool isOpenstore);

            private:
				bool all_;
				std::string instanceId_;
				bool isManaged_;
				int size_;
				std::string name_;
				int page_;
				bool isOpenstore_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTINSTANCEINDICESREQUEST_H_