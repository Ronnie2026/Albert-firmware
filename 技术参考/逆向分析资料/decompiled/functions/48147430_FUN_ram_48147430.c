/* Firmware entry: 0x48147430 */

undefined4
FUN_ram_48147430(int param_1,uint *param_2,uint *param_3,int param_4,uint param_5,uint param_6,
                int param_7,undefined4 param_8,ushort param_9)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  ushort *puVar10;
  uint uVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  uint uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar13 = (uint)param_9;
  if (*(char *)(param_1 + 0xe) != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/ip4.c",0x3a1,"ip4_output_if_opt_src",
                     "p->ref == 1");
  }
  if (param_3 == (uint *)0x0) {
    if (*(ushort *)(param_1 + 10) < 0x14) {
      return 0xfffffffe;
    }
    param_3 = &uStack_34;
    uStack_34 = *(uint *)(*(int *)(param_1 + 4) + 0x10);
    if (*(uint *)(param_7 + 4) == uStack_34) goto LAB_ram_4814766e;
  }
  else {
    if (uVar13 == 0) {
      uVar14 = 0x14;
      iVar6 = 0;
    }
    else {
      if (0x28 < uVar13) {
        return 0xfffffffa;
      }
      uVar4 = uVar13 + 3 & 0xfffc;
      uVar14 = uVar4 + 0x14 & 0xffff;
      iVar6 = FUN_ram_4813aab0(param_1,uVar4);
      if (iVar6 != 0) {
        return 0xfffffffe;
      }
      FUN_ram_4ff45158(*(undefined4 *)(param_1 + 4),param_8,uVar13);
      if (uVar13 < uVar4) {
        memset((void *)(*(int *)(param_1 + 4) + uVar13),0,uVar4 - uVar13);
      }
      puVar12 = *(ushort **)(param_1 + 4);
      iVar6 = 0;
      puVar10 = (ushort *)(uVar4 + (int)puVar12);
      do {
        uVar1 = *puVar12;
        puVar12 = puVar12 + 1;
        iVar6 = iVar6 + (uint)uVar1;
      } while (puVar10 != puVar12);
    }
    iVar7 = FUN_ram_4813aab0(param_1,0x14);
    if (iVar7 != 0) {
      return 0xfffffffe;
    }
    pbVar5 = *(byte **)(param_1 + 4);
    if (*(ushort *)(param_1 + 10) < 0x14) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/ip4.c",0x3d5,"ip4_output_if_opt_src"
                       ,"check that first pbuf can hold struct ip_hdr");
    }
    pbVar5[8] = (byte)param_4;
    pbVar5[9] = (byte)param_6;
    uVar4 = *param_3;
    param_6 = param_4 << 8 | param_6;
    uVar11 = (uVar14 >> 2 & 0xff | 0x40) << 8 | param_5;
    *pbVar5 = (byte)(uVar14 >> 2) | 0x40;
    pbVar5[1] = (byte)param_5;
    uVar2 = *(undefined2 *)(param_1 + 8);
    pbVar5[0x10] = (byte)uVar4;
    pbVar5[0x12] = (byte)(uVar4 >> 0x10);
    pbVar5[0x11] = (byte)(uVar4 >> 8);
    pbVar5[0x13] = (byte)(uVar4 >> 0x18);
    iVar7 = FUN_ram_48137fc8(uVar2);
    sVar3 = DAT_ram_4ff6e228;
    pbVar5[2] = (byte)iVar7;
    pbVar5[3] = (byte)((uint)iVar7 >> 8);
    pbVar5[6] = 0;
    pbVar5[7] = 0;
    iVar8 = FUN_ram_48137fc8(sVar3);
    pbVar5[4] = (byte)iVar8;
    DAT_ram_4ff6e228 = DAT_ram_4ff6e228 + 1;
    pbVar5[5] = (byte)((uint)iVar8 >> 8);
    uVar13 = DAT_ram_48236f9c;
    if (param_2 != (uint *)0x0) {
      uVar13 = *param_2;
    }
    uVar14 = (uVar13 & 0xffff) +
             iVar8 + ((uVar11 << 8 | (int)uVar11 >> 8) & 0xffff) +
                     ((param_6 << 8 | (int)param_6 >> 8) & 0xffff) +
                     (uVar4 & 0xffff) + (uVar4 >> 0x10) + iVar6 + iVar7 + (uVar13 >> 0x10);
    uVar14 = (uVar14 >> 0x10) + (uVar14 & 0xffff);
    uVar14 = ~(uVar14 + (uVar14 >> 0x10));
    pbVar5[10] = (byte)uVar14;
    pbVar5[0xb] = (byte)(uVar14 >> 8);
    uVar4 = *param_3;
    uVar14 = *(uint *)(param_7 + 4);
    pbVar5[0xc] = (byte)uVar13;
    pbVar5[0xe] = (byte)(uVar13 >> 0x10);
    pbVar5[0xd] = (byte)(uVar13 >> 8);
    pbVar5[0xf] = (byte)(uVar13 >> 0x18);
    if (uVar14 == uVar4) {
LAB_ram_4814766e:
      uVar9 = FUN_ram_4813a14c(param_7,param_1);
      return uVar9;
    }
  }
  if ((*(byte *)(param_1 + 0xd) & 4) != 0) {
    FUN_ram_4813a14c(param_7,param_1);
  }
  if ((*(ushort *)(param_7 + 0xdc) == 0) ||
     (*(ushort *)(param_1 + 8) <= *(ushort *)(param_7 + 0xdc))) {
    uVar9 = (**(code **)(param_7 + 0xb4))(param_7,param_1,param_3);
  }
  else {
    uVar9 = FUN_ram_48147a30(param_1,param_7,param_3);
  }
  return uVar9;
}


