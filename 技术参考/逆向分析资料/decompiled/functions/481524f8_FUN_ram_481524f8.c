/* Firmware entry: 0x481524f8 */

void FUN_ram_481524f8(int *param_1,undefined1 *param_2,int *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar7 = *param_1;
  iVar8 = *param_3;
  puVar2 = param_2;
  if ((*(uint *)(iVar7 + 0x1218) & 3) == 2) {
    if (iVar8 < 10) {
      *(ushort *)(iVar7 + 0x1218) = *(ushort *)(iVar7 + 0x1218) & 0xfffd;
    }
    else {
      *param_2 = 1;
      param_2[1] = 10;
      iVar8 = iVar8 + -10;
      puVar2 = param_2 + 10;
      uVar3 = FUN_ram_48137fd6(*(undefined4 *)(iVar7 + 0x121c));
      param_2[2] = (char)((uint)uVar3 >> 0x18);
      param_2[3] = (char)((uint)uVar3 >> 0x10);
      param_2[4] = (char)((uint)uVar3 >> 8);
      param_2[5] = (char)uVar3;
      uVar3 = FUN_ram_48137fd6(*(undefined4 *)(iVar7 + 0x1220));
      param_2[9] = (char)uVar3;
      param_2[6] = (char)((uint)uVar3 >> 0x18);
      param_2[7] = (char)((uint)uVar3 >> 0x10);
      param_2[8] = (char)((uint)uVar3 >> 8);
    }
  }
  uVar5 = *(ushort *)(iVar7 + 0x1218);
  puVar1 = puVar2;
  if ((uVar5 & 8) == 0) {
LAB_ram_48152586:
    puVar2 = puVar1;
    if ((uVar5 & 1) != 0) {
      if (iVar8 < 6) goto LAB_ram_48152592;
      *puVar1 = 3;
      puVar1[1] = 6;
      iVar8 = iVar8 + -6;
      puVar2 = puVar1 + 6;
      uVar3 = FUN_ram_48137fd6(*(undefined4 *)(iVar7 + 0x121c));
      puVar1[5] = (char)uVar3;
      puVar1[2] = (char)((uint)uVar3 >> 0x18);
      puVar1[3] = (char)((uint)uVar3 >> 0x10);
      puVar1[4] = (char)((uint)uVar3 >> 8);
      uVar5 = *(ushort *)(iVar7 + 0x1218);
    }
    puVar1 = puVar2;
    if ((uVar5 & 0x100) != 0) {
      if (iVar8 < 6) goto LAB_ram_481525ac;
      *puVar2 = 0x81;
      puVar2[1] = 6;
      iVar8 = iVar8 + -6;
      puVar1 = puVar2 + 6;
      uVar3 = FUN_ram_48137fd6(*(undefined4 *)(iVar7 + 0x1224));
      puVar2[5] = (char)uVar3;
      puVar2[2] = (char)((uint)uVar3 >> 0x18);
      puVar2[3] = (char)((uint)uVar3 >> 0x10);
      puVar2[4] = (char)((uint)uVar3 >> 8);
      uVar5 = *(ushort *)(iVar7 + 0x1218);
    }
    if ((uVar5 & 0x200) == 0) goto LAB_ram_481525d2;
    if (5 < iVar8) {
      *puVar1 = 0x83;
      puVar1[1] = 6;
      iVar8 = iVar8 + -6;
      uVar3 = FUN_ram_48137fd6(*(undefined4 *)(iVar7 + 0x1228));
      puVar1[5] = (char)uVar3;
      puVar1[2] = (char)((uint)uVar3 >> 0x18);
      puVar1[3] = (char)((uint)uVar3 >> 0x10);
      puVar1[4] = (char)((uint)uVar3 >> 8);
      goto LAB_ram_481525d2;
    }
  }
  else {
    iVar4 = (uint)((uVar5 & 0x10) == 0) * 2 + 4;
    if (iVar4 <= iVar8) {
      puVar2[1] = (char)iVar4;
      *puVar2 = 2;
      puVar2[2] = (char)((ushort)*(undefined2 *)(iVar7 + 0x122c) >> 8);
      puVar2[3] = (char)*(undefined2 *)(iVar7 + 0x122c);
      uVar5 = *(ushort *)(iVar7 + 0x1218);
      if ((uVar5 & 0x10) == 0) {
        puVar1 = puVar2 + 6;
        iVar8 = iVar8 - iVar4;
        puVar2[4] = *(undefined1 *)(iVar7 + 0x122e);
        puVar2[5] = (byte)(*(uint *)(iVar7 + 0x1218) >> 5) & 1;
        uVar5 = *(ushort *)(iVar7 + 0x1218);
      }
      else {
        puVar1 = puVar2 + 4;
        iVar8 = iVar8 - iVar4;
      }
      goto LAB_ram_48152586;
    }
    uVar6 = uVar5 & 0xfff7;
    *(ushort *)(iVar7 + 0x1218) = uVar6;
    if ((uVar5 & 1) != 0) {
LAB_ram_48152592:
      uVar5 = *(ushort *)(iVar7 + 0x1218);
      uVar6 = uVar5 & 0xfffe;
      *(ushort *)(iVar7 + 0x1218) = uVar6;
    }
    if ((uVar5 & 0x100) == 0) {
      if ((uVar6 & 0x200) != 0) {
        *(ushort *)(iVar7 + 0x1218) = *(ushort *)(iVar7 + 0x1218) & 0xfdff;
      }
      goto LAB_ram_481525d2;
    }
LAB_ram_481525ac:
    uVar5 = *(ushort *)(iVar7 + 0x1218);
    *(ushort *)(iVar7 + 0x1218) = uVar5 & 0xfeff;
    if ((uVar5 & 0x200) == 0) goto LAB_ram_481525d2;
  }
  *(ushort *)(iVar7 + 0x1218) = *(ushort *)(iVar7 + 0x1218) & 0xfdff;
LAB_ram_481525d2:
  *param_3 = *param_3 - iVar8;
  return;
}


