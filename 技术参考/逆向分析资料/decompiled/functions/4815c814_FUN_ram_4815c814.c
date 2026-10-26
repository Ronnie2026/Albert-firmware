/* Firmware entry: 0x4815c814 */

int FUN_ram_4815c814(int param_1,undefined4 param_2,int param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iStack_58;
  int local_54;
  undefined1 uStack_50;
  char cStack_4f;
  char cStack_33;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 100) != 1) {
    return 0x1101;
  }
  iStack_58 = -1;
  iVar1 = *(int *)(param_1 + 0x10);
  if (param_3 == 0x41) {
    if (iVar1 != 0) {
      do {
        local_54 = 0;
        iVar2 = FUN_ram_4815af12(iVar1,param_2,0x48,param_4,&local_54,&uStack_50,0xff);
        iVar4 = local_54;
        if (iVar2 == 0) {
          iVar2 = FUN_ram_4815c6bc(param_1,param_2,param_4,param_5,param_6);
          if (iVar2 == 0) {
            return 0;
          }
          if (cStack_33 == '\0') {
            uVar3 = 0x80;
            goto LAB_ram_4815c988;
          }
          if (cStack_33 != -0x80) {
            return -1;
          }
          goto LAB_ram_4815ca4a;
        }
        iVar1 = *(int *)(iVar1 + 4);
      } while (iVar1 != 0);
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 != 0) goto LAB_ram_4815ca1a;
    }
LAB_ram_4815ca58:
    iVar4 = 0;
    iVar1 = 0;
    uVar3 = 0;
    goto LAB_ram_4815c988;
  }
  if (iVar1 != 0) {
    do {
      local_54 = 0;
      iVar2 = FUN_ram_4815af12(iVar1,param_2,param_3,param_4,&local_54,&uStack_50,0xff);
      iVar4 = local_54;
      if (iVar2 == 0) {
        iVar2 = FUN_ram_4815b9de(iVar1,&iStack_58);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_ram_4815b238(iVar1,param_2,param_3,param_4,param_5,param_6,0xff);
        if (iVar2 == 0) {
          return 0;
        }
        goto LAB_ram_4815c8a4;
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != 0);
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 != 0) {
LAB_ram_4815ca1a:
      do {
        local_54 = 0;
        iVar2 = FUN_ram_4815af12(iVar1,param_2,0xff,param_4,&local_54,&uStack_50,0xff);
        iVar4 = local_54;
        if (iVar2 == 0) {
          iVar2 = FUN_ram_4815b9de(iVar1,&iStack_58);
          if (iVar2 != 0) {
            return iVar2;
          }
          if (param_3 == 0x41) goto LAB_ram_4815ca4a;
          goto LAB_ram_4815c8a4;
        }
        iVar1 = *(int *)(iVar1 + 4);
      } while (iVar1 != 0);
      if (param_3 == 0x41) goto LAB_ram_4815ca58;
    }
  }
  iVar4 = 0;
  iVar1 = 0;
LAB_ram_4815c8a4:
  iVar5 = *(int *)(param_1 + 0x14);
  iVar2 = FUN_ram_4815aa6c(iVar5,param_2,param_3,param_4,param_5,param_6,0xff);
  if (iVar2 == 0x110a) {
    if ((*(int *)(iVar5 + 0xc) != -4) && (iVar2 = FUN_ram_4815baa8(iVar5), iVar2 != 0)) {
      return iVar2;
    }
    iVar2 = FUN_ram_4815db02(param_1 + 0x10);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_ram_4815aa6c(*(undefined4 *)(param_1 + 0x14),param_2,param_3,param_4,param_5,param_6
                             ,0xff);
    goto joined_r0x4815c99c;
  }
LAB_ram_4815c8c6:
  if (iVar2 != 0) {
    return iVar2;
  }
  if (iVar1 == 0) {
    return 0;
  }
  if (cStack_4f == 'H') {
    if (*(int *)(param_1 + 100) != 1) {
      return 0x1101;
    }
    iVar1 = FUN_ram_4815bb98(param_1,param_2,param_4,cStack_33);
joined_r0x4815caa2:
    if (iVar1 == 0x6001) {
      iVar1 = 0x1108;
    }
  }
  else {
    cVar6 = cStack_4f;
    if ((*(uint *)(iVar1 + 0xc) & 0xfffffffd) == 0xfffffffc) {
      iVar2 = FUN_ram_4815b9de(iVar1,&local_54);
      if (iVar2 != 0) {
        return iVar2;
      }
      cVar6 = cStack_4f;
      if (local_54 == iStack_58) {
LAB_ram_4815c914:
        iVar1 = FUN_ram_4815ac98(iVar1,iVar4);
        goto joined_r0x4815caa2;
      }
    }
    for (iVar1 = *(int *)(param_1 + 0x10); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      local_54 = 0;
      iVar2 = FUN_ram_4815af12(iVar1,param_2,cVar6,param_4,&local_54,&uStack_50,0xff);
      iVar4 = local_54;
      if (iVar2 == 0) goto LAB_ram_4815c914;
    }
    iVar1 = 0x1102;
  }
  return iVar1;
LAB_ram_4815ca4a:
  uVar3 = 0;
LAB_ram_4815c988:
  iVar2 = FUN_ram_4815c328(param_1,param_2,param_4,param_5,param_6,uVar3);
joined_r0x4815c99c:
  if (iVar2 == 0x110a) {
    return 0x1105;
  }
  goto LAB_ram_4815c8c6;
}


