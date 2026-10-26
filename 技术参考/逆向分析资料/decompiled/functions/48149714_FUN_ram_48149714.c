/* Firmware entry: 0x48149714 */

undefined4 FUN_ram_48149714(int param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  code *pcVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  sVar4 = FUN_ram_4814c63e(param_3);
  iVar12 = *(int *)(param_1 + 4);
  DAT_ram_4ff6e22c = DAT_ram_4ff6e22c + 1;
  if (*(ushort *)(param_1 + 8) < 0x28) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv6/ip6_frag.c",0x30f,"ip6_frag",
                     "p->tot_len >= IP6_HLEN");
  }
  uVar3 = *(ushort *)(param_1 + 8) - 0x28;
  if (uVar3 != 0) {
    uVar11 = sVar4 - 0x30U & 0xfff8;
    sVar4 = 0x28;
    uVar1 = 0;
    do {
      uVar2 = uVar11;
      if (uVar3 < uVar11) {
        uVar2 = uVar3;
      }
      piVar9 = (int *)FUN_ram_4813ad9a(0x36,uVar2 + 8,0x280);
      if (piVar9 == (int *)0x0) {
        return 0xffffffff;
      }
      if ((*(short *)((int)piVar9 + 10) != (short)piVar9[2]) || (*piVar9 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv6/ip6_frag.c",0x31e,"ip6_frag",
                         "this needs a pbuf in one piece!");
      }
      sVar5 = FUN_ram_4813b38c(param_1,piVar9[1] + 8,uVar2,sVar4);
      sVar4 = sVar5 + sVar4;
      iVar7 = FUN_ram_4813aab0(piVar9,0x28);
      if (iVar7 != 0) {
        FUN_ram_4813ac74(piVar9);
        return 0xffffffff;
      }
      FUN_ram_4ff45158(piVar9[1],iVar12,0x28);
      iVar13 = piVar9[1];
      *(undefined1 *)(iVar13 + 0x28) = *(undefined1 *)(iVar12 + 6);
      *(undefined1 *)(iVar13 + 0x29) = 0;
      uVar6 = FUN_ram_48137fc8((ushort)(uVar11 < uVar3) | uVar1 & 0xfff8);
      iVar7 = DAT_ram_4ff6e22c;
      *(char *)(iVar13 + 0x2a) = (char)uVar6;
      *(char *)(iVar13 + 0x2b) = (char)((ushort)uVar6 >> 8);
      uVar8 = FUN_ram_48137fd6(iVar7);
      *(undefined1 *)(iVar13 + 6) = 0x2c;
      *(char *)(iVar13 + 0x2d) = (char)((uint)uVar8 >> 8);
      *(char *)(iVar13 + 0x2c) = (char)uVar8;
      *(char *)(iVar13 + 0x2e) = (char)((uint)uVar8 >> 0x10);
      *(char *)(iVar13 + 0x2f) = (char)((uint)uVar8 >> 0x18);
      uVar6 = FUN_ram_48137fc8(uVar2 + 8);
      pcVar10 = *(code **)(param_2 + 0xbc);
      *(char *)(iVar13 + 5) = (char)((ushort)uVar6 >> 8);
      *(char *)(iVar13 + 4) = (char)uVar6;
      uVar3 = uVar3 - uVar2;
      (*pcVar10)(param_2,piVar9,param_3,pcVar10);
      uVar1 = uVar2 + uVar1;
      FUN_ram_4813ac74(piVar9);
    } while (uVar3 != 0);
  }
  return 0;
}


