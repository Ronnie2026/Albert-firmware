/* Firmware entry: 0x4817d444 */

undefined4 FUN_ram_4817d444(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-aes-gcm","E (%lu) %s: No AES context supplied\n",uVar1,"esp-aes-gcm");
  }
  else {
    if (*(int *)(param_1 + 0x184) != 0) {
      uVar1 = FUN_ram_481845d4(*(int *)(param_1 + 0x184));
      return uVar1;
    }
    if (param_3 >> 0x1d == 0) {
      if ((param_3 == 0) || (param_2 != 0)) {
        if (*(int *)(param_1 + 0x180) != 1) {
          uVar1 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"esp-aes-gcm","E (%lu) %s: AES context in invalid state!\n",uVar1,
                           "esp-aes-gcm");
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 0xffffffff;
        }
        *(int *)(param_1 + 0x158) = param_2;
        *(uint *)(param_1 + 0x148) = param_3;
        *(undefined4 *)(param_1 + 0x14c) = 0;
        FUN_ram_4817cedc(param_1,param_2,param_3,param_1 + 0x10);
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
      uVar1 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-aes-gcm","E (%lu) %s: No aad supplied\n",uVar1,"esp-aes-gcm");
    }
  }
  return 0xffffffec;
}


