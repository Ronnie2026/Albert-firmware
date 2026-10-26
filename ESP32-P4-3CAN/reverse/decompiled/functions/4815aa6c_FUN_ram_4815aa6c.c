/* Firmware entry: 0x4815aa6c */

int FUN_ram_4815aa6c(int param_1,undefined1 param_2,int param_3,char *param_4,int param_5,
                    uint param_6,undefined1 param_7)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = *(int *)(param_1 + 0xc);
  if (iVar5 == 0) {
    return 0x110b;
  }
  if (iVar5 == -1) {
    iVar5 = FUN_ram_4815a632();
    if (iVar5 != 0) {
      return iVar5;
    }
    iVar5 = *(int *)(param_1 + 0xc);
  }
  if (iVar5 == -4) {
    iVar5 = 0x110a;
  }
  else {
    sVar1 = strlen(param_4);
    iVar5 = 0x1109;
    if ((sVar1 < 0x10) && (iVar5 = 0x110e, param_6 < 0xfa1)) {
      uVar6 = param_3 - 0x41U & 0xff;
      iVar5 = 1;
      if ((uVar6 < 2) || (param_3 == 0x21)) {
        uVar3 = param_6 + 0x1f & 0xffffffe0;
        uVar4 = uVar3 + 0x20;
        iVar5 = 1;
        if (uVar3 != 0) {
          iVar5 = (param_6 + 0x1f >> 5) + 1;
        }
      }
      else {
        if (8 < param_6) {
          return 0x102;
        }
        uVar4 = 0x20;
      }
      iVar7 = *(int *)(param_1 + 0x38);
      if (iVar7 == -1) {
        iVar2 = 0x110a;
      }
      else {
        iVar2 = 0x110a;
        if ((uint)(iVar5 + iVar7) < 0x7f) {
          uStack_38 = 0xffffffff;
          uStack_34 = 0xffffffff;
          uStack_50._0_2_ = CONCAT11((char)param_3,param_2);
          uStack_50 = CONCAT13(param_7,(int3)CONCAT22((short)(uVar4 >> 5),(undefined2)uStack_50));
          FUN_ram_4ff45594(&uStack_48,param_4,0xf);
          uStack_3c = uStack_3c & 0xffffff;
          local_70 = uStack_50;
          uStack_6c = uStack_4c;
          uStack_68 = uStack_48;
          uStack_64 = uStack_44;
          uStack_60 = uStack_40;
          uStack_5c = uStack_3c;
          uStack_58 = uStack_38;
          uStack_54 = uStack_34;
          iVar2 = FUN_ram_4815d86c(param_1 + 0x44,&local_70,iVar7);
          if (iVar2 == 0) {
            if ((uVar6 < 2) || (param_3 == 0x21)) {
              uStack_54 = FUN_ram_4815d6a8(param_5,param_6,0);
              uStack_58 = CONCAT22(0xffff,(short)param_6);
              uStack_6c = FUN_ram_4815d638(&local_70);
              iVar5 = FUN_ram_4815a72c(param_1,&local_70);
              iVar2 = iVar5;
              if (iVar5 == 0) {
                uVar6 = param_6 & 0xffffffe0;
                if (((uVar6 == 0) || (iVar2 = FUN_ram_4815a9ca(param_1,param_5,uVar6), iVar2 == 0))
                   && (iVar2 = iVar5, (param_6 & 0x1f) != 0)) {
                  local_70 = 0xffffffff;
                  uStack_6c = 0xffffffff;
                  uStack_68 = 0xffffffff;
                  uStack_64 = 0xffffffff;
                  uStack_60 = 0xffffffff;
                  uStack_5c = 0xffffffff;
                  uStack_58 = 0xffffffff;
                  uStack_54 = 0xffffffff;
                  FUN_ram_4ff45158(&local_70,param_5 + uVar6,param_6 & 0x1f);
                  iVar2 = FUN_ram_4815a72c(param_1,&local_70);
                }
              }
            }
            else {
              FUN_ram_4ff45158(&uStack_58,param_5,param_6);
              uStack_6c = FUN_ram_4815d638(&local_70);
              iVar2 = FUN_ram_4815a72c(param_1,&local_70);
            }
          }
        }
      }
      return iVar2;
    }
  }
  return iVar5;
}


