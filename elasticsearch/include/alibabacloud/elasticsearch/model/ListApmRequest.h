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

#ifndef ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTAPMREQUEST_H_
#define ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTAPMREQUEST_H_

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
			class ALIBABACLOUD_ELASTICSEARCH_EXPORT ListApmRequest : public RoaServiceRequest
			{

			public:
				ListApmRequest();
				~ListApmRequest();

				std::string getOutput()const;
				void setOutput(const std::string& output);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				long getSize()const;
				void setSize(long size);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getPage()const;
				void setPage(long page);

            private:
				std::string output_;
				std::string instanceId_;
				long size_;
				std::string description_;
				long page_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTAPMREQUEST_H_