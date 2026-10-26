/* Firmware entry: 0x4817a95c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4817a95c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                    int *param_5)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  ushort uVar13;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined4 local_68;
  undefined4 auStack_64 [4];
  undefined2 auStack_54 [20];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar2 = &local_68;
  puVar3 = &DAT_ram_481defdc;
  do {
    puVar10 = puVar3;
    puVar9 = puVar2;
    uVar5 = puVar10[1];
    uVar7 = puVar10[2];
    uVar8 = puVar10[3];
    *puVar9 = *puVar10;
    puVar9[1] = uVar5;
    puVar9[2] = uVar7;
    puVar9[3] = uVar8;
    puVar2 = puVar9 + 4;
    puVar3 = puVar10 + 4;
  } while (puVar10 + 4 != (undefined4 *)&UNK_ram_481df00c);
  uVar1 = *(undefined2 *)(puVar10 + 5);
  puVar9[4] = _UNK_ram_481df00c;
  *(undefined2 *)(puVar9 + 5) = uVar1;
  if ((((((param_4 == (int *)0x0) || (param_5 == (int *)0x0)) || (*param_4 != 0)) ||
       ((*param_5 != 0 || (iVar6 = FUN_ram_481802e8(param_1,0), iVar6 < 1)))) ||
      ((iVar6 = FUN_ram_481802e8(param_3,1), iVar6 < 1 ||
       ((iVar6 = FUN_ram_4818023e(param_3,param_1), -1 < iVar6 ||
        (iVar6 = FUN_ram_481802e8(param_2,1), iVar6 < 1)))))) ||
     (iVar6 = FUN_ram_4818023e(param_2,param_1), -1 < iVar6)) {
    return -4;
  }
  FUN_ram_4817fb86(auStack_70);
  FUN_ram_4817fb86(auStack_78);
  iVar6 = FUN_ram_4817bf84(auStack_78,param_3,param_2);
  if ((iVar6 == 0) && (iVar6 = FUN_ram_481805c8(auStack_78,auStack_78,1), iVar6 == 0)) {
    uVar4 = FUN_ram_48180036(auStack_78);
    if (uVar4 != 0) {
      iVar6 = FUN_ram_4818019e(auStack_78,uVar4);
      if (iVar6 != 0) goto LAB_ram_4817aa22;
      uVar11 = (uint)((*(uint *)*param_1 & 7) == 1);
      puVar12 = (undefined1 *)((int)auStack_64 + (uVar11 - 4));
      do {
        iVar6 = FUN_ram_4817ff24(auStack_70,*puVar12);
        if ((iVar6 != 0) || (iVar6 = FUN_ram_48180ec2(param_4,0,auStack_70,param_1), iVar6 != 0))
        goto LAB_ram_4817aa22;
        iVar6 = FUN_ram_481802e8(param_4,1);
        if (iVar6 == 0) {
          iVar6 = FUN_ram_4817bc22(auStack_70,auStack_70,auStack_78,param_1,param_5);
          if (iVar6 != 0) goto LAB_ram_4817aa22;
          uVar13 = 1;
          do {
            iVar6 = FUN_ram_481802e8(auStack_70,1);
            if (iVar6 == 0) break;
            iVar6 = FUN_ram_4818059a(auStack_70,auStack_70,1);
            if ((iVar6 != 0) || (iVar6 = FUN_ram_48180ec2(param_4,0,auStack_70,param_1), iVar6 != 0)
               ) goto LAB_ram_4817aa22;
            iVar6 = FUN_ram_481802e8(param_4,1);
            if ((iVar6 == 1) && (iVar6 = FUN_ram_4818023e(param_4,param_1), iVar6 == -1)) {
              iVar6 = FUN_ram_481805fa(param_5,0,param_1,param_4);
              goto LAB_ram_4817aa22;
            }
            iVar6 = FUN_ram_481805c8(auStack_70,auStack_70,1);
            if (iVar6 != 0) goto LAB_ram_4817aa22;
            iVar6 = FUN_ram_4817bf84(auStack_70,auStack_70);
            if (iVar6 != 0) goto LAB_ram_4817aa22;
            uVar13 = uVar13 + 1;
            iVar6 = FUN_ram_48180a3c(auStack_70,auStack_70,param_1);
            if (iVar6 != 0) goto LAB_ram_4817aa22;
          } while (uVar13 <= uVar4);
          iVar6 = FUN_ram_481802e8(auStack_70,1);
          if (iVar6 != 0) break;
        }
        puVar12 = puVar12 + 1;
      } while (puVar12 != (undefined1 *)((int)auStack_64 + (0x35 - uVar11 & 0xffff) + uVar11 + -3));
    }
    iVar6 = -4;
  }
LAB_ram_4817aa22:
  FUN_ram_4817fb90(auStack_70);
  FUN_ram_4817fb90(auStack_78);
  return iVar6;
}


