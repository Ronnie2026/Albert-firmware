/* Firmware entry: 0x4815af12 */

int FUN_ram_4815af12(int param_1,uint param_2,uint param_3,int param_4,uint *param_5,byte *param_6,
                    uint param_7,uint param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 auStack_58 [15];
  undefined1 uStack_49;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *(int *)(param_1 + 0xc);
  if ((((iVar2 == -0x10) || (iVar2 == 0)) || (iVar2 == -1)) || (uVar4 = *param_5, 0x7d < uVar4)) {
    return 0x1102;
  }
  uVar3 = *(uint *)(param_1 + 0x3c);
  if (*(uint *)(param_1 + 0x3c) < uVar4) {
    uVar3 = uVar4;
  }
  uVar4 = *(uint *)(param_1 + 0x38);
  if (0x7e < uVar4) {
    uVar4 = 0x7e;
  }
  if (((param_2 != 0xff) && (param_4 != 0)) && ((param_3 != 0x42 || (param_7 != 0xff)))) {
    uStack_48 = 0xffffffff;
    uStack_44 = 0xffffffff;
    uStack_60 = (undefined1)param_2;
    uStack_5f = (undefined1)param_3;
    uStack_5e = 0;
    uStack_5d = (undefined1)param_7;
    FUN_ram_4ff45594(auStack_58,param_4,0xf);
    uStack_49 = 0;
    uVar3 = FUN_ram_4815da28(param_1 + 0x44,uVar3,&uStack_60);
    if (0x7d < uVar3) {
      return 0x1102;
    }
  }
joined_r0x4815afc2:
  do {
    while( true ) {
      do {
        uVar1 = uVar3;
        if (uVar4 <= uVar1) {
          return 0x1102;
        }
        uVar3 = uVar1 + 1;
      } while ((*(uint *)((uVar1 >> 4) * 4 + param_1 + 0x18) >> ((uVar1 & 0xf) << 1) & 3) != 2);
      iVar2 = (**(code **)(**(int **)(param_1 + 0x50) + 0x10))
                        (*(int **)(param_1 + 0x50),uVar1 * 0x20 + *(int *)(param_1 + 8) + 0x40,
                         param_6,0x20);
      if (iVar2 != 0) goto LAB_ram_4815b0e0;
      iVar2 = FUN_ram_4815d6be(param_6,uVar1 & 0xff);
      if (iVar2 != 0) break;
      iVar2 = FUN_ram_4815ac98(param_1,uVar1);
      if (iVar2 != 0) {
LAB_ram_4815b0e0:
        *(undefined4 *)(param_1 + 0xc) = 0;
        return iVar2;
      }
    }
    uVar5 = (uint)param_6[1];
    if (((uVar5 - 0x41 & 0xff) < 2) || (uVar5 == 0x21)) {
      uVar3 = param_6[2] + uVar1;
    }
  } while (((param_2 != 0xff) && (*param_6 != param_2)) ||
          ((param_4 != 0 && (iVar2 = FUN_ram_4ff45520(param_4,param_6 + 8,0xf), iVar2 != 0))));
  if (param_7 == 0xff) {
    if (param_3 == 0x42) {
      if (uVar5 == 0x42) {
        *param_5 = uVar1;
        return 0;
      }
      goto joined_r0x4815afc2;
    }
    if (param_3 != 0x41) goto LAB_ram_4815b09a;
    if (uVar5 == 0x48) {
      return 0x1103;
    }
    if (uVar5 == 0x42) goto joined_r0x4815afc2;
  }
  else {
    if (param_3 == 0x42) {
      if (param_6[3] == param_7) {
        if (uVar5 != 0x42) goto LAB_ram_4815b0be;
        goto LAB_ram_4815b116;
      }
      goto joined_r0x4815afc2;
    }
LAB_ram_4815b09a:
    if (param_3 == 0x48) {
      if ((param_6[3] != 0xff) || ((param_8 != 0xff && (param_6[0x1d] != param_8))))
      goto joined_r0x4815afc2;
    }
    else if (param_3 == 0xff) goto LAB_ram_4815b116;
  }
  if (uVar5 == param_3) {
LAB_ram_4815b116:
    *param_5 = uVar1;
    return 0;
  }
  if ((param_4 != 0) || ((param_2 & param_7) != 0xff)) {
LAB_ram_4815b0be:
    *param_5 = uVar1;
    return 0x1103;
  }
  goto joined_r0x4815afc2;
}


