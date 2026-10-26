/* Firmware entry: 0x48135fee */

int FUN_ram_48135fee(undefined4 param_1,int param_2,uint *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  code *pcVar7;
  uint uVar8;
  undefined2 uStack_5a;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  byte bStack_44;
  char cStack_40;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined2 uStack_3a;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_5a = 0;
  piVar2 = (int *)FUN_ram_48134b36();
  if (piVar2 == (int *)0x0) {
LAB_ram_48136140:
    puVar5 = (undefined4 *)FUN_ram_4819bf88();
    *puVar5 = 9;
    return -1;
  }
  if (*piVar2 == 0) {
    FUN_ram_48134a50();
    goto LAB_ram_48136140;
  }
  iVar3 = FUN_ram_4814f234(*piVar2,&iStack_58);
  if (iVar3 == 0) {
    if (iStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/sockets.c",0x2b9,"lwip_accept",
                       "newconn != NULL");
    }
    iVar4 = FUN_ram_4813444a(iStack_58,1);
    if (iVar4 == -1) {
      FUN_ram_4814f028(iStack_58);
      puVar5 = (undefined4 *)FUN_ram_4819bf88();
      *puVar5 = 0x17;
      FUN_ram_48134a50(piVar2);
      return -1;
    }
    FUN_ram_4814e762();
    uVar1 = *(undefined4 *)(iStack_58 + 0x1c);
    *(int *)(iStack_58 + 0x1c) = iVar4;
    FUN_ram_4814e79e();
    pcVar7 = *(code **)(iStack_58 + 0x38);
    if ((pcVar7 != (code *)0x0) && (iVar3 = (int)(short)~(ushort)uVar1, 0 < iVar3)) {
      while( true ) {
        iVar3 = iVar3 + -1;
        (*pcVar7)(iStack_58,0,0);
        if (iVar3 == 0) break;
        pcVar7 = *(code **)(iStack_58 + 0x38);
      }
    }
    if ((param_2 == 0) || (param_3 == (uint *)0x0)) {
LAB_ram_481360fa:
      FUN_ram_48134a50(piVar2);
      FUN_ram_48134a50(&DAT_ram_4ff6c614 + (iVar4 + -0x36) * 5);
      return iVar4;
    }
    iVar3 = FUN_ram_4814f084(iStack_58,&uStack_54,&uStack_5a,0);
    if (iVar3 == 0) {
      if ((cStack_40 == '.') || (cStack_40 == '\x06')) {
        uStack_3b = 10;
        uStack_3a = FUN_ram_48137fc8(uStack_5a);
        uStack_24 = (uint)bStack_44;
        uVar8 = 0x1c;
        uStack_38 = 0;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        uStack_28 = uStack_48;
        uStack_3c = 0x1c;
      }
      else {
        uStack_3b = 2;
        uStack_3a = FUN_ram_48137fc8(uStack_5a);
        uStack_38 = uStack_54;
        uVar8 = 0x10;
        uStack_3c = 0x10;
        uStack_34 = 0;
        uStack_30 = 0;
      }
      uVar6 = *param_3;
      if (uVar8 < *param_3) {
        *param_3 = uVar8;
        uVar6 = uVar8;
      }
      FUN_ram_4ff45158(param_2,&uStack_3c,uVar6);
      goto LAB_ram_481360fa;
    }
    FUN_ram_48134f28(&DAT_ram_4ff6c614 + (iVar4 + -0x36) * 5,1);
    iVar4 = FUN_ram_481517ce(iVar3);
  }
  else {
    if ((*(uint *)*piVar2 & 0xf0) != 0x10) {
      puVar5 = (undefined4 *)FUN_ram_4819bf88();
      *puVar5 = 0x5f;
      goto LAB_ram_48136172;
    }
    if (iVar3 == -0xf) {
      puVar5 = (undefined4 *)FUN_ram_4819bf88();
      *puVar5 = 0x16;
      goto LAB_ram_48136172;
    }
    iVar4 = FUN_ram_481517ce();
  }
  if (iVar4 != 0) {
    puVar5 = (undefined4 *)FUN_ram_4819bf88();
    uVar1 = FUN_ram_481517ce(iVar3);
    *puVar5 = uVar1;
  }
LAB_ram_48136172:
  FUN_ram_48134a50(piVar2);
  return -1;
}


