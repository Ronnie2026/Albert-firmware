/* Firmware entry: 0x48155ae8 */

void FUN_ram_48155ae8(int *param_1)

{
  byte *pbVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  undefined4 uVar5;
  ushort uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar1 = (byte *)*param_1;
  if ((*(ushort *)(pbVar1 + 100) & 0x10) == 0) {
    pbVar1[0x6c] = 0;
    pbVar1[0x6d] = 0;
    pbVar1[0x6e] = 0;
    pbVar1[0x6f] = 0;
  }
  if ((*(ushort *)(pbVar1 + 0xac) & 0x10) == 0) {
    pbVar1[0xb4] = 0;
    pbVar1[0xb5] = 0;
    pbVar1[0xb6] = 0;
    pbVar1[0xb7] = 0;
  }
  uVar6 = 0x5dc;
  if ((*(ushort *)(pbVar1 + 0xac) & 4) != 0) {
    uVar6 = *(ushort *)(pbVar1 + 0xae);
  }
  uVar2 = 0x5dc;
  if ((*(ushort *)(pbVar1 + 100) & 4) != 0) {
    uVar2 = *(ushort *)(pbVar1 + 0x66);
    if (*(ushort *)(pbVar1 + 0x66) < *(ushort *)(pbVar1 + 0x42)) {
      uVar2 = *(ushort *)(pbVar1 + 0x42);
    }
  }
  uVar4 = *(ushort *)(pbVar1 + 0x8a);
  if (uVar6 < *(ushort *)(pbVar1 + 0x8a)) {
    uVar4 = uVar6;
  }
  if (uVar2 < uVar4) {
    uVar4 = uVar2;
  }
  FUN_ram_4814d144(pbVar1,uVar4);
  uVar5 = 0xffffffff;
  if ((*(ushort *)(pbVar1 + 0xac) & 8) != 0) {
    uVar5 = *(undefined4 *)(pbVar1 + 0xb0);
  }
  FUN_ram_4814ceda(pbVar1,uVar6,uVar5,*(uint *)(pbVar1 + 0xac) >> 5 & 1,
                   *(uint *)(pbVar1 + 0xac) >> 6 & 1);
  uVar5 = 0;
  if (((*pbVar1 & 8) == 0) && (uVar5 = 0xffffffff, (*(ushort *)(pbVar1 + 100) & 8) != 0)) {
    uVar5 = *(undefined4 *)(pbVar1 + 0x68);
  }
  FUN_ram_4814cef8(pbVar1,uVar2,uVar5,*(uint *)(pbVar1 + 100) >> 5 & 1,
                   *(uint *)(pbVar1 + 100) >> 6 & 1);
  if ((*(ushort *)(pbVar1 + 0xac) & 4) != 0) {
    *(undefined2 *)(pbVar1 + 0xd0) = *(undefined2 *)(pbVar1 + 0xae);
  }
  iVar3 = *param_1;
  *(undefined2 *)(iVar3 + 0xd2) = 0;
  *(byte *)(iVar3 + 0x22) = *(byte *)(iVar3 + 0x22) & 0xbf;
  if (*(char *)(iVar3 + 9) != '\0') {
    FUN_ram_481559ea(iVar3 + 0x24);
  }
  FUN_ram_48151c7e(pbVar1);
  return;
}


