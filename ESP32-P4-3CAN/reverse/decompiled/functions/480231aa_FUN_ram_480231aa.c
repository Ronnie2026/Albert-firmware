/* Firmware entry: 0x480231aa */

void FUN_ram_480231aa(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 != 0) {
    if (param_1 == 0) {
      uVar1 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"os_wrapper_esp","E (%lu) %s: %s:%u dest is NULL\n\n",uVar1,
                       "os_wrapper_esp","hosted_memcpy",0x44);
      if (param_2 == 0) {
        uVar1 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"os_wrapper_esp","E (%lu) %s: %s:%u dest is NULL\n\n",uVar1,
                         "os_wrapper_esp","hosted_memcpy",0x46);
      }
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("port_esp_hosted_host_os.c",0x48,"hosted_memcpy",&DAT_ram_481c1144);
    }
    if (param_2 == 0) {
      uVar1 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"os_wrapper_esp","E (%lu) %s: %s:%u dest is NULL\n\n",uVar1,
                       "os_wrapper_esp","hosted_memcpy",0x46);
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("port_esp_hosted_host_os.c",0x49,"hosted_memcpy",&DAT_ram_481c1184);
    }
  }
  FUN_ram_4ff45158(param_1,param_2);
  return;
}


