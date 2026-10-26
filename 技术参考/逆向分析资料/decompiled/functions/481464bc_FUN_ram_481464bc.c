/* Firmware entry: 0x481464bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_481464bc(int param_1,undefined4 param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  ushort uVar9;
  undefined2 uVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  uint uVar14;
  undefined1 *puVar15;
  
  pbVar1 = DAT_ram_4ff6cdbc;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar9 = (*DAT_ram_4ff6cdbc & 0xf) * 4;
  if (((((uVar9 < 0x14) || (*(ushort *)(param_1 + 10) < 4)) || (**(char **)(param_1 + 4) != '\b'))
      || (((_DAT_ram_4ff6cde0 & 0xf0) == 0xe0 ||
          (iVar11 = FUN_ram_48147794(_DAT_ram_4ff6cde0,DAT_ram_4ff6cdb4), iVar11 != 0)))) ||
     ((*(ushort *)(param_1 + 8) < 8 || (iVar11 = FUN_ram_48151abc(param_1), iVar11 != 0))))
  goto LAB_ram_48146526;
  iVar11 = FUN_ram_4813aab0(param_1,uVar9 + 0xe);
  if (iVar11 == 0) {
    iVar11 = FUN_ram_4813ab98(param_1,uVar9 + 0xe);
    if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/icmp.c",199,"icmp_input",
                       "icmp_input: restoring original p->payload failed");
    }
LAB_ram_481465ac:
    puVar15 = *(undefined1 **)(param_1 + 4);
    iVar11 = FUN_ram_4813aab0(param_1,uVar9);
    uVar4 = DAT_ram_4ff6cdc8._3_1_;
    uVar3 = DAT_ram_4ff6cdc8._1_1_;
    uVar2 = (undefined1)DAT_ram_4ff6cdc8;
    if (iVar11 == 0) {
      iVar11 = *(int *)(param_1 + 4);
      uVar5 = DAT_ram_4ff6cde0;
      uVar6 = DAT_ram_4ff6cde1;
      uVar7 = DAT_ram_4ff6cde2;
      uVar8 = DAT_ram_4ff6cde3;
      *(undefined1 *)(iVar11 + 0x12) = DAT_ram_4ff6cdc8._2_1_;
      *(undefined1 *)(iVar11 + 0xc) = uVar5;
      *(undefined1 *)(iVar11 + 0xd) = uVar6;
      *(undefined1 *)(iVar11 + 0xe) = uVar7;
      *(undefined1 *)(iVar11 + 0xf) = uVar8;
      *(undefined1 *)(iVar11 + 0x10) = uVar2;
      *(undefined1 *)(iVar11 + 0x11) = uVar3;
      *(undefined1 *)(iVar11 + 0x13) = uVar4;
      *puVar15 = 0;
      uVar14 = (uint)*(ushort *)(puVar15 + 2);
      if (uVar14 < 0xfff8) {
        uVar14 = uVar14 + 8;
      }
      else {
        uVar14 = uVar14 + 9;
      }
      puVar15[2] = (char)(uVar14 & 0xffff);
      puVar15[3] = (char)((uVar14 & 0xffff) >> 8);
      *(undefined1 *)(iVar11 + 10) = 0;
      *(undefined1 *)(iVar11 + 0xb) = 0;
      *(undefined1 *)(iVar11 + 8) = 0x40;
      uVar10 = FUN_ram_48151aa6(iVar11,uVar9);
      *(char *)(iVar11 + 10) = (char)uVar10;
      *(char *)(iVar11 + 0xb) = (char)((ushort)uVar10 >> 8);
      FUN_ram_48147772(param_1,&DAT_ram_4ff6cde0,0,0x40,0,1,param_2);
    }
  }
  else {
    uVar13 = *(ushort *)(param_1 + 8) + uVar9;
    if ((uVar13 < *(ushort *)(param_1 + 8)) ||
       (iVar11 = FUN_ram_4813ad9a(0xe,uVar13,0x280), iVar11 == 0)) goto LAB_ram_48146526;
    if ((ushort)(uVar9 + 8) <= *(ushort *)(iVar11 + 10)) {
      FUN_ram_4ff45158(*(undefined4 *)(iVar11 + 4),pbVar1,uVar9);
      iVar12 = FUN_ram_4813ab98(iVar11,uVar9);
      if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/icmp.c",0xb6,"icmp_input",
                         "icmp_input: moving r->payload to icmp header failed");
      }
      iVar12 = FUN_ram_4813b37c(iVar11,param_1);
      if (iVar12 == 0) {
        FUN_ram_4813ac74(param_1);
        param_1 = iVar11;
        goto LAB_ram_481465ac;
      }
    }
    FUN_ram_4813ac74(iVar11);
  }
LAB_ram_48146526:
  FUN_ram_4813ac74(param_1);
  return;
}


