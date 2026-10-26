/* Firmware entry: 0x481a9324 */

void FUN_ram_481a9324(int *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar7 = *param_1;
  uVar8 = *param_2;
  uVar6 = (uVar8 >> 1) - 1;
  bVar1 = *(byte *)((int)param_2 + 7);
  bVar2 = *(byte *)((int)param_2 + 5);
  uVar4 = param_2[1];
  bVar3 = *(byte *)((int)param_2 + 6);
  uVar5 = param_2[2];
  *(uint *)(iVar7 + 0x18) = *(uint *)(iVar7 + 0x18) & 0xffffc000 | uVar6 & 0x3fff;
  *(uint *)(iVar7 + 0x18) = *(uint *)(iVar7 + 0x18) & 0xffff3fff | (bVar1 - 1 & 3) << 0xe;
  *(uint *)(iVar7 + 0x1c) =
       ((uint)bVar2 + (uint)(byte)uVar4) - 1 & 0xf | *(uint *)(iVar7 + 0x1c) & 0xfffffff0;
  *(uint *)(iVar7 + 0x1c) = (bVar3 - 1 & 7) << 4 | *(uint *)(iVar7 + 0x1c) & 0xffffff8f;
  *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) & 0xffffff7f | (uint)((char)uVar5 != '\0') << 7;
  if (uVar8 - 2 < 0x1e9) {
    *(uint *)(iVar7 + 0x7c) = *(uint *)(iVar7 + 0x7c) & 0xfffffeff;
    *(uint *)(iVar7 + 0x7c) = *(uint *)(iVar7 + 0x7c) & 0xffffff00 | uVar6 & 0xff;
    return;
  }
  if (uVar8 != 1) {
    *(uint *)(iVar7 + 0x7c) = *(uint *)(iVar7 + 0x7c) | 0x100;
    *(uint *)(iVar7 + 0x7c) = *(uint *)(iVar7 + 0x7c) & 0xffffff00;
    return;
  }
  *(uint *)(iVar7 + 0x7c) = *(uint *)(iVar7 + 0x7c) & 0xfffffeff;
  *(uint *)(iVar7 + 0x7c) = *(uint *)(iVar7 + 0x7c) | 0xff;
  return;
}


