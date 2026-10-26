/* Firmware entry: 0x4ff3bd24 */

void FUN_ram_4ff3bd24(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  DAT_ram_4ff6da2c = DAT_ram_4ff6da2c + 1;
  if (DAT_ram_4ff6da2c == 1) {
    puVar2 = &DAT_ram_4ff58c24;
    do {
      puVar3 = puVar2 + 0x14;
      FUN_ram_4ff3fade(puVar2);
      puVar2 = puVar3;
    } while (puVar3 != (undefined *)0x4ff58e18);
    FUN_ram_4ff3fade(&DAT_ram_4ff58c10);
    FUN_ram_4ff3fade(&DAT_ram_4ff58bfc);
    FUN_ram_4ff3fade(&DAT_ram_4ff58bd4);
    FUN_ram_4ff3fade(&DAT_ram_4ff58be8);
    FUN_ram_4ff3fade(&DAT_ram_4ff58bc0);
    FUN_ram_4ff3fade(&DAT_ram_4ff58bac);
    DAT_ram_4ff6da38 = &DAT_ram_4ff58c10;
    DAT_ram_4ff6da34 = &DAT_ram_4ff58bfc;
  }
  uVar1 = DAT_ram_4ff6da24;
  if ((DAT_ram_4ff6da3c == 0) &&
     ((*(int *)(param_1 + 0x44) == 0 || (*(int *)(param_1 + 0x44) == 0x7fffffff)))) {
    uVar4 = *(uint *)(param_1 + 0x2c);
    DAT_ram_4ff6da3c = param_1;
    goto LAB_ram_4ff3bd78;
  }
  if ((DAT_ram_4ff6da40 == 0) &&
     ((*(int *)(param_1 + 0x44) == 1 || (*(int *)(param_1 + 0x44) == 0x7fffffff)))) {
    uVar4 = *(uint *)(param_1 + 0x2c);
    DAT_ram_4ff6da40 = param_1;
    goto LAB_ram_4ff3bd78;
  }
  uVar4 = *(uint *)(param_1 + 0x2c);
  if (DAT_ram_4ff6da20 != 0) goto LAB_ram_4ff3bd78;
  if (DAT_ram_4ff6da3c == 0) {
LAB_ram_4ff3be00:
    if ((DAT_ram_4ff6da40 == 0) ||
       ((*(int *)(param_1 + 0x44) != 1 && (*(int *)(param_1 + 0x44) != 0x7fffffff))))
    goto LAB_ram_4ff3bd78;
  }
  else {
    if (*(int *)(param_1 + 0x44) == 0) {
      if (uVar4 < *(uint *)(DAT_ram_4ff6da3c + 0x2c)) goto LAB_ram_4ff3bd78;
LAB_ram_4ff3befc:
      DAT_ram_4ff6da3c = param_1;
      goto LAB_ram_4ff3bd78;
    }
    if (*(int *)(param_1 + 0x44) != 0x7fffffff) goto LAB_ram_4ff3be00;
    if (*(uint *)(DAT_ram_4ff6da3c + 0x2c) <= uVar4) goto LAB_ram_4ff3befc;
    if (DAT_ram_4ff6da40 == 0) goto LAB_ram_4ff3bd78;
  }
  if (*(uint *)(DAT_ram_4ff6da40 + 0x2c) <= uVar4) {
    DAT_ram_4ff6da40 = param_1;
  }
LAB_ram_4ff3bd78:
  DAT_ram_4ff6da0c = DAT_ram_4ff6da0c + 1;
  *(int *)(param_1 + 0x4c) = DAT_ram_4ff6da0c;
  if (uVar1 < uVar4) {
    DAT_ram_4ff6da24 = uVar4;
  }
  piVar6 = (int *)(&DAT_ram_4ff58c24 + uVar4 * 0x14);
  iVar5 = *(int *)(&DAT_ram_4ff58c28 + uVar4 * 0x14);
  *(int *)(param_1 + 8) = iVar5;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar5 + 8);
  *(int *)(*(int *)(iVar5 + 8) + 4) = param_1 + 4;
  *(int *)(iVar5 + 8) = param_1 + 4;
  *(int **)(param_1 + 0x14) = piVar6;
  *piVar6 = *piVar6 + 1;
  FUN_ram_4ff2ad84(param_1,param_1 + 0x34,uVar4,DAT_ram_4ff6da28);
  if ((DAT_ram_4ff6da20 != 0) &&
     (iVar5 = FUN_ram_4ff3bb04(param_1,*(undefined4 *)(param_1 + 0x2c),1), iVar5 == 1)) {
    FUN_ram_4ff3ef0e();
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
  return;
}


