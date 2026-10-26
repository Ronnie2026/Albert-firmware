/* Firmware entry: 0x4814f426 */

int FUN_ram_4814f426(uint *param_1,int param_2,int param_3,byte param_4,uint *param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint *puStack_38;
  char cStack_34;
  int iStack_30;
  undefined2 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  uint uStack_20;
  byte bStack_1c;
  uint uStack_18;
  int *piStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (uint *)0x0) {
    return -0x10;
  }
  if ((*param_1 & 0xf0) != 0x10) {
    return -6;
  }
  if (((param_1[0xc] & 2) == 0 && (param_4 & 4) == 0) && (param_1[8] == 0)) {
    bVar1 = false;
  }
  else {
    if (param_5 == (uint *)0x0) {
      return -6;
    }
    bVar1 = true;
  }
  puVar4 = (uint *)(param_2 + 4);
  iVar5 = 0;
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      uVar3 = *puVar4;
      uVar2 = uVar2 + uVar3;
      uStack_18 = (uint)(uVar2 < uVar3);
      if (uVar2 < uVar3) {
        return -6;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar5 != param_3);
    if (uVar2 != 0) {
      uStack_2c = (undefined2)param_3;
      if ((int)uVar2 < 0) {
        if (param_5 == (uint *)0x0) {
          return -6;
        }
        uVar2 = 0x7fffffff;
      }
      uStack_20 = 0;
      uStack_28 = 0;
      puStack_38 = param_1;
      iStack_30 = param_2;
      uStack_24 = uVar2;
      bStack_1c = param_4;
      if (param_1[8] != 0) {
        uStack_20 = 0;
        uStack_28 = 0;
        uStack_18 = thunk_FUN_ram_4ff3c5d4();
      }
      piStack_14 = (int *)FUN_ram_4814e840();
      if ((piStack_14 == (int *)0x0) || (*piStack_14 == 0)) {
        return -1;
      }
      iVar5 = FUN_ram_481378ce(FUN_ram_48151358,&puStack_38,piStack_14);
      if ((iVar5 != 0) || (iVar5 = (int)cStack_34, iVar5 != 0)) {
        return iVar5;
      }
      if (param_5 != (uint *)0x0) {
        *param_5 = uStack_20;
      }
      if ((!bVar1) && (uStack_20 != uVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_lib.c",0x433,
                         "netconn_write_vectors_partly","do_write failed to write all bytes");
      }
    }
  }
  return 0;
}


