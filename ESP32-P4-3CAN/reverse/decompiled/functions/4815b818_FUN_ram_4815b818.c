/* Firmware entry: 0x4815b818 */

int FUN_ram_4815b818(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint local_50;
  undefined4 uStack_4c;
  byte bStack_48;
  undefined1 auStack_47 [19];
  int iStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (int *)0x0) {
    return 0x102;
  }
  *(int **)(param_1 + 0x50) = param_2;
  *(int *)(param_1 + 8) = param_3 << 0xc;
  *(undefined4 *)(param_1 + 0x40) = 0;
  memset(auStack_47,0xff,0x13);
  iVar2 = (**(code **)(*param_2 + 0xc))(param_2,param_3 << 0xc,&local_50,0x20);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return iVar2;
  }
  if (local_50 == 0xffffffff) {
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    piVar3 = (int *)FUN_ram_48194ed0(0x200,&DAT_ram_4823acc0);
    if (piVar3 == (int *)0x0) {
      return 0x101;
    }
    iVar2 = 0;
    do {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x50) + 0xc))
                        (*(int **)(param_1 + 0x50),*(int *)(param_1 + 8) + iVar2,piVar3,0x200);
      piVar5 = piVar3;
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        thunk_FUN_ram_4ff209c6(piVar3);
        return iVar4;
      }
      do {
        if (*piVar5 != -1) {
joined_r0x4815b964:
          if (piVar3 + 0x80 != piVar5) {
            *(undefined4 *)(param_1 + 0xc) = 0xfffffff0;
            goto LAB_ram_4815b924;
          }
          break;
        }
        if (piVar5[1] != -1) {
          piVar5 = piVar5 + 1;
          goto joined_r0x4815b964;
        }
        if (piVar5[2] != -1) {
          piVar5 = piVar5 + 2;
          goto joined_r0x4815b964;
        }
        if (piVar5[3] != -1) {
          piVar5 = piVar5 + 3;
          goto joined_r0x4815b964;
        }
        piVar5 = piVar5 + 4;
      } while (piVar3 + 0x80 != piVar5);
      iVar2 = iVar2 + 0x200;
    } while (iVar2 != 0x1000);
LAB_ram_4815b924:
    thunk_FUN_ram_4ff209c6(piVar3);
    uVar1 = *(uint *)(param_1 + 0xc);
  }
  else {
    iVar2 = crc32_le(0xffffffff,&uStack_4c,0x18);
    if (iStack_34 == iVar2) {
      *(undefined4 *)(param_1 + 0x10) = uStack_4c;
      *(uint *)(param_1 + 0xc) = local_50;
      if (bStack_48 < 0xfe) {
        return 0x1110;
      }
      *(byte *)(param_1 + 0x14) = bStack_48;
      uVar1 = local_50;
    }
    else {
      local_50 = 0xfffffff0;
      uVar1 = *(uint *)(param_1 + 0xc);
    }
  }
  if (uVar1 == 0xffffffff) {
    return 0;
  }
  if (((uVar1 & 0xfffffffb) != 0xfffffff8) && (uVar1 != 0xfffffffe)) {
    *(undefined4 *)(param_1 + 0xc) = 0xfffffff0;
    return 0;
  }
  iVar2 = FUN_ram_4815b40a(param_1);
  return iVar2;
}


