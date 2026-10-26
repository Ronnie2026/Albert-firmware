/* Firmware entry: 0x4817d31a */

undefined4 FUN_ram_4817d31a(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-aes-gcm","E (%lu) %s: No AES context supplied\n",uVar2,"esp-aes-gcm");
    uVar2 = 0xffffffec;
  }
  else {
    if (*(int *)(param_1 + 0x184) != 0) {
      uVar2 = FUN_ram_48184440();
      return uVar2;
    }
    if ((param_4 == 0) || (param_4 >> 0x1d != 0)) {
      uVar2 = 0xffffffec;
    }
    else if (param_3 == 0) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-aes-gcm","E (%lu) %s: No IV supplied\n",uVar2,"esp-aes-gcm");
      uVar2 = 0xffffffec;
    }
    else {
      memset((void *)(param_1 + 0x10),0,0x10);
      *(undefined4 *)(param_1 + 0x150) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(undefined4 *)(param_1 + 0x148) = 0;
      *(undefined4 *)(param_1 + 0x14c) = 0;
      *(int *)(param_1 + 0x140) = param_3;
      *(uint *)(param_1 + 0x144) = param_4;
      *(undefined4 *)(param_1 + 0x154) = param_2;
      if (*(int *)(param_1 + 0x180) == 0) {
        FUN_ram_4817b5fc();
        uVar1 = FUN_ram_4818b75c(param_1 + 0x15e,*(undefined1 *)(param_1 + 0x15c),param_2);
        *(undefined1 *)(param_1 + 0x15d) = uVar1;
        FUN_ram_4818b7f2(6);
        FUN_ram_4818b8aa(param_1);
        FUN_ram_4817b60e();
        FUN_ram_4817d08c(param_1);
      }
      FUN_ram_4817cfb0(param_1);
      FUN_ram_4ff45158(param_1 + 0x130,param_1 + 0x20,0x10);
      *(undefined4 *)(param_1 + 0x180) = 1;
      uVar2 = 0;
    }
  }
  return uVar2;
}


