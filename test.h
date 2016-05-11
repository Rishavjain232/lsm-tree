
void print_buffer_data(lsm* tree);

void print_disk_data(lsm* tree); 

void test_print_tree(lsm* tree);

int test_get(lsm* tree, int data_size);

int test_put(lsm* tree, int data_size);

int test_delete(lsm* tree, int data_size);

int test_update(lsm* tree, int data_size);

int test_throughput(lsm* tree, int data_size);