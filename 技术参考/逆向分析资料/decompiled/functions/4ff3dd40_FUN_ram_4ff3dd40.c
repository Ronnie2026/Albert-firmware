/* Firmware entry: 0x4ff3dd40 */

void FUN_ram_4ff3dd40(char *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  size_t sVar7;
  char *pcVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  uint auStack_44 [4];
  
  iVar5 = DAT_ram_4ff6da2c;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_1 = '\0';
  iVar4 = FUN_ram_4ff3f268(iVar5 * 0x28);
  if (iVar4 == 0) {
    return;
  }
  iVar5 = FUN_ram_4ff3d886(iVar4,iVar5,auStack_44);
  uVar3 = auStack_44[0] / 100;
  bVar1 = 99 < auStack_44[0];
  auStack_44[0] = uVar3;
  if ((bVar1) && (iVar5 != 0)) {
    iVar11 = iVar4;
    do {
      uVar10 = *(uint *)(iVar11 + 0x18);
      puVar6 = (undefined1 *)FUN_ram_4819b714(param_1,*(undefined4 *)(iVar11 + 4));
      uVar2 = (int)puVar6 - (int)param_1;
      if (uVar2 < 0xf) {
        pcVar8 = param_1 + (0xf - (int)puVar6);
        puVar9 = puVar6;
        if ((char *)0x7 < pcVar8) {
          *puVar6 = 0x20;
          puVar6[1] = 0x20;
          puVar6[2] = 0x20;
          puVar6[3] = 0x20;
          puVar6[4] = 0x20;
          puVar6[5] = 0x20;
          puVar6[6] = 0x20;
          puVar6[7] = 0x20;
          puVar9 = puVar6 + 8;
          pcVar8 = param_1 + (7 - (int)puVar6);
        }
        if ((char *)0x3 < pcVar8) {
          *puVar9 = 0x20;
          puVar9[1] = 0x20;
          puVar9[2] = 0x20;
          puVar9[3] = 0x20;
          pcVar8 = pcVar8 + -4;
          puVar9 = puVar9 + 4;
        }
        if ((char *)0x1 < pcVar8) {
          *puVar9 = 0x20;
          puVar9[1] = 0x20;
          pcVar8 = pcVar8 + -2;
          puVar9 = puVar9 + 2;
        }
        if (pcVar8 != (char *)0x0) {
          *puVar9 = 0x20;
        }
        uVar2 = 0xf;
      }
      param_1 = param_1 + uVar2;
      *param_1 = '\0';
      if (uVar10 < uVar3) {
        FUN_ram_4819adf6(param_1,"\t%u\t\t<1%%\r\n",*(undefined4 *)(iVar11 + 0x18));
      }
      else {
        FUN_ram_4819adf6(param_1,"\t%u\t\t%u%%\r\n",*(undefined4 *)(iVar11 + 0x18),uVar10 / uVar3);
      }
      sVar7 = strlen(param_1);
      iVar11 = iVar11 + 0x28;
      param_1 = param_1 + sVar7;
    } while (iVar5 * 0x28 + iVar4 != iVar11);
  }
  thunk_FUN_ram_4ff209c6(iVar4);
  return;
}


