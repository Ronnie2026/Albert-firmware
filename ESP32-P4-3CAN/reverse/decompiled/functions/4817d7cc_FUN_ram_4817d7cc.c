/* Firmware entry: 0x4817d7cc */

int FUN_ram_4817d7cc(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
                    int param_6,uint param_7,int param_8,int param_9,undefined4 param_10,
                    undefined4 param_11)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-aes-gcm","E (%lu) %s: No AES context supplied\n",uVar5,"esp-aes-gcm");
    iVar2 = -0x14;
  }
  else {
    if (*(int *)(param_1 + 0x184) != 0) {
      iVar2 = FUN_ram_48184b1e();
      return iVar2;
    }
    if ((param_7 < 0xff1) &&
       ((((param_6 + 0xb0100000U < 0xc0000 || (param_7 == 0)) && (param_8 + 0xb0100000U < 0xc0000))
        && ((param_9 + 0xb0100000U < 0xc0000 && (param_3 != 0)))))) {
      if ((param_5 != 0) && (param_5 >> 0x1d == 0)) {
        if (param_4 == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"esp-aes-gcm","E (%lu) %s: No IV supplied\n",uVar5,"esp-aes-gcm");
        }
        else {
          if ((param_7 == 0) || (param_6 != 0)) {
            memset((void *)(param_1 + 0x10),0,0x10);
            *(undefined4 *)(param_1 + 0x150) = 0;
            *(int *)(param_1 + 0x140) = param_4;
            *(uint *)(param_1 + 0x144) = param_5;
            *(int *)(param_1 + 0x158) = param_6;
            *(uint *)(param_1 + 0x148) = param_7;
            *(undefined4 *)(param_1 + 0x14c) = 0;
            *(undefined4 *)(param_1 + 0x154) = param_2;
            FUN_ram_4817b5fc();
            *(undefined1 *)(param_1 + 0x15d) = 0;
            uVar1 = FUN_ram_4818b75c(param_1 + 0x15e,*(undefined1 *)(param_1 + 0x15c),param_2);
            *(undefined1 *)(param_1 + 0x15d) = uVar1;
            FUN_ram_4818b7f2(6);
            FUN_ram_4818b910(param_7 + 0xf >> 4,(param_3 & 0xf) << 3);
            FUN_ram_4818b8aa(param_1);
            FUN_ram_4817d08c(param_1);
            FUN_ram_4817cfb0(param_1);
            puVar3 = (undefined4 *)&DAT_ram_50090070;
            do {
              local_34 = *(undefined4 *)(param_1 + -0x50090050 + (int)puVar3);
              puVar4 = puVar3 + 1;
              *puVar3 = local_34;
              puVar3 = puVar4;
            } while (puVar4 != (undefined4 *)&DAT_ram_50090080);
            iVar2 = FUN_ram_4818705c(param_1 + 0x15c,param_8,param_9,param_3,param_6,param_7);
            if (iVar2 == 0) {
              FUN_ram_4818b91e(param_11,param_10);
            }
            FUN_ram_4817b60e();
            return iVar2;
          }
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"esp-aes-gcm","E (%lu) %s: No aad supplied\n",uVar5,"esp-aes-gcm");
        }
      }
      iVar2 = -0x14;
    }
    else {
      iVar2 = FUN_ram_4817d31a(param_1,param_2,param_4,param_5);
      if ((iVar2 == 0) &&
         ((iVar2 = FUN_ram_4817d444(param_1,param_6,param_7), iVar2 == 0 &&
          (iVar2 = FUN_ram_4817d51c(param_1,param_8,param_3,param_9,0,&local_34), iVar2 == 0)))) {
        iVar2 = FUN_ram_4817d726(param_1,param_9,0,&local_34,param_11,param_10);
      }
    }
  }
  return iVar2;
}


