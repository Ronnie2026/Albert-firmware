/* Firmware entry: 0x48181aea */

int FUN_ram_48181aea(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 != 0) {
    iVar1 = 0;
    puVar4 = param_1;
    do {
      uVar3 = *puVar4;
      puVar5 = puVar4 + 1;
      uVar2 = iVar1 + uVar3;
      uVar6 = ((int)(-(param_4 >> 1) | -param_4) >> 0x1f & *param_2) + uVar2;
      *puVar4 = uVar6;
      param_2 = param_2 + 1;
      iVar1 = (uint)(uVar2 < uVar3) + (uint)(uVar6 < uVar2);
      puVar4 = puVar5;
    } while (param_1 + param_3 != puVar5);
    return iVar1;
  }
  return 0;
}


