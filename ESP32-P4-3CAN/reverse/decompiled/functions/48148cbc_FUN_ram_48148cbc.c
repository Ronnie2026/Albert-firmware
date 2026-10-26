/* Firmware entry: 0x48148cbc */

undefined4
FUN_ram_48148cbc(int param_1,undefined4 *param_2,uint *param_3,undefined1 param_4,int param_5,
                undefined1 param_6,int param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  short sVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  undefined2 uVar18;
  int iVar19;
  undefined4 uVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  char cStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0xe) != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv6/ip6.c",0x4b1,"ip6_output_if_src",
                     "p->ref == 1");
  }
  if (param_3 == (uint *)0x0) {
    iVar19 = *(int *)(param_1 + 4);
    local_44 = *(uint *)(iVar19 + 0x18);
    uStack_40 = *(uint *)(iVar19 + 0x1c);
    uStack_3c = *(uint *)(iVar19 + 0x20);
    uStack_38 = *(uint *)(iVar19 + 0x24);
    if (((local_44 & 0xc0ff) == 0x80fe) ||
       (cStack_34 = '\0', ((local_44 & 0x8fff) - 0x1ff & 0xfffffeff) == 0)) {
      cStack_34 = *(char *)(param_7 + 0xea) + '\x01';
    }
    param_3 = &local_44;
    goto LAB_ram_48148e6e;
  }
  if ((char)param_3[4] == '\0') {
    uVar21 = *param_3;
    if ((uVar21 & 0xc0ff) == 0x80fe) {
LAB_ram_48148f10:
      uStack_40 = param_3[1];
      uStack_3c = param_3[2];
      uStack_38 = param_3[3];
    }
    else {
      if ((uVar21 & 0x8fff) != 0x1ff) {
        if ((uVar21 & 0x8fff) != 0x2ff) goto LAB_ram_48148cf4;
        goto LAB_ram_48148f10;
      }
      uStack_40 = param_3[1];
      uStack_3c = param_3[2];
      uStack_38 = param_3[3];
    }
    param_3 = &local_44;
    cStack_34 = *(char *)(param_7 + 0xea) + '\x01';
    local_44 = uVar21;
  }
LAB_ram_48148cf4:
  iVar19 = FUN_ram_4813aab0(param_1,0x28);
  if (iVar19 != 0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0xfffffffe;
  }
  puVar17 = *(undefined1 **)(param_1 + 4);
  if (*(ushort *)(param_1 + 10) < 0x28) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv6/ip6.c",0x4cb,"ip6_output_if_src",
                     "check that first pbuf can hold struct ip6_hdr");
  }
  puVar17[7] = param_4;
  puVar17[6] = param_6;
  uVar1 = *(undefined1 *)((int)param_3 + 1);
  uVar2 = *(undefined1 *)((int)param_3 + 2);
  uVar3 = *(undefined1 *)((int)param_3 + 3);
  uVar21 = param_3[1];
  uVar4 = *(undefined1 *)((int)param_3 + 5);
  uVar5 = *(undefined1 *)((int)param_3 + 6);
  uVar6 = *(undefined1 *)((int)param_3 + 7);
  uVar15 = param_3[2];
  puVar17[0x18] = (char)*param_3;
  uVar7 = *(undefined1 *)((int)param_3 + 9);
  puVar17[0x19] = uVar1;
  uVar1 = *(undefined1 *)((int)param_3 + 10);
  puVar17[0x1a] = uVar2;
  uVar2 = *(undefined1 *)((int)param_3 + 0xb);
  puVar17[0x1b] = uVar3;
  uVar16 = param_3[3];
  puVar17[0x1c] = (char)uVar21;
  uVar3 = *(undefined1 *)((int)param_3 + 0xd);
  puVar17[0x1d] = uVar4;
  uVar4 = *(undefined1 *)((int)param_3 + 0xe);
  puVar17[0x1e] = uVar5;
  puVar17[0x1f] = uVar6;
  puVar17[0x20] = (char)uVar15;
  puVar17[0x22] = uVar1;
  puVar17[0x23] = uVar2;
  puVar17[0x24] = (char)uVar16;
  puVar17[0x26] = uVar4;
  puVar17[0x21] = uVar7;
  puVar17[0x25] = uVar3;
  puVar17[0x27] = *(undefined1 *)((int)param_3 + 0xf);
  uVar20 = FUN_ram_48137fd6(param_5 << 0x14 | 0x60000000);
  sVar13 = *(short *)(param_1 + 8);
  *puVar17 = (char)uVar20;
  puVar17[1] = (char)((uint)uVar20 >> 8);
  puVar17[2] = (char)((uint)uVar20 >> 0x10);
  puVar17[3] = (char)((uint)uVar20 >> 0x18);
  uVar18 = FUN_ram_48137fc8(sVar13 + -0x28);
  puVar17[4] = (char)uVar18;
  puVar17[5] = (char)((ushort)uVar18 >> 8);
  if (param_2 == (undefined4 *)0x0) {
    param_2 = &DAT_ram_48237014;
  }
  uVar1 = *(undefined1 *)((int)param_2 + 1);
  uVar2 = *(undefined1 *)((int)param_2 + 2);
  uVar3 = *(undefined1 *)((int)param_2 + 3);
  uVar4 = *(undefined1 *)(param_2 + 1);
  uVar5 = *(undefined1 *)((int)param_2 + 5);
  uVar6 = *(undefined1 *)((int)param_2 + 6);
  uVar7 = *(undefined1 *)((int)param_2 + 7);
  uVar8 = *(undefined1 *)(param_2 + 2);
  uVar9 = *(undefined1 *)((int)param_2 + 9);
  uVar10 = *(undefined1 *)((int)param_2 + 10);
  uVar11 = *(undefined1 *)((int)param_2 + 0xb);
  puVar17[8] = *(undefined1 *)param_2;
  puVar17[9] = uVar1;
  uVar1 = *(undefined1 *)(param_2 + 3);
  uVar12 = *(undefined1 *)((int)param_2 + 0xd);
  puVar17[10] = uVar2;
  puVar17[0xb] = uVar3;
  uVar2 = *(undefined1 *)((int)param_2 + 0xe);
  uVar3 = *(undefined1 *)((int)param_2 + 0xf);
  puVar17[0xc] = uVar4;
  puVar17[0xd] = uVar5;
  puVar17[0xe] = uVar6;
  puVar17[0xf] = uVar7;
  puVar17[0x10] = uVar8;
  puVar17[0x11] = uVar9;
  puVar17[0x12] = uVar10;
  puVar17[0x13] = uVar11;
  puVar17[0x14] = uVar1;
  puVar17[0x15] = uVar12;
  puVar17[0x16] = uVar2;
  puVar17[0x17] = uVar3;
LAB_ram_48148e6e:
  puVar23 = (uint *)(param_7 + 0x4c);
  puVar22 = (uint *)(param_7 + 0x94);
  while ((((((*puVar22 & 0x10) == 0 || (*param_3 != *puVar23)) || (param_3[1] != puVar23[1])) ||
          ((param_3[2] != puVar23[2] || (param_3[3] != puVar23[3])))) ||
         ((byte)param_3[4] != (byte)puVar23[4]))) {
    puVar23 = puVar23 + 6;
    puVar22 = (uint *)((int)puVar22 + 1);
    if (puVar23 == (uint *)(param_7 + 0x94)) {
      if ((*(byte *)(param_1 + 0xd) & 4) == 0) {
        sVar13 = *(short *)(param_7 + 0xde);
      }
      else {
        FUN_ram_4813a14c(param_7,param_1);
        sVar13 = *(short *)(param_7 + 0xde);
      }
      if ((sVar13 == 0) ||
         (uVar14 = *(ushort *)(param_1 + 8), uVar21 = FUN_ram_4814c63e(param_3,param_7),
         uVar14 <= uVar21)) {
        uVar20 = (**(code **)(param_7 + 0xbc))(param_7,param_1,param_3);
      }
      else {
        uVar20 = FUN_ram_48149714(param_1,param_7,param_3);
      }
      return uVar20;
    }
  }
  uVar20 = FUN_ram_4813a14c(param_7,param_1);
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return uVar20;
}


