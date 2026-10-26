/* Firmware entry: 0x48149e44 */

undefined4 FUN_ram_48149e44(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  char cStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = *param_2;
  if ((uVar3 & 0xff) != 0xff) {
    return 0xfffffffa;
  }
  if ((char)param_2[4] == '\0') {
    if ((uVar3 & 0x8fff) == 0x1ff) {
      uStack_20 = param_2[1];
      uStack_1c = param_2[2];
      uStack_18 = param_2[3];
    }
    else {
      if ((uVar3 & 0x8fff) != 0x2ff) goto LAB_ram_48149e66;
      uStack_20 = param_2[1];
      uStack_1c = param_2[2];
      uStack_18 = param_2[3];
    }
    param_2 = &uStack_24;
    cStack_14 = *(char *)(param_1 + 0xea) + '\x01';
    uStack_24 = uVar3;
    puVar1 = (undefined4 *)FUN_ram_48149c74(param_1,param_2);
  }
  else {
LAB_ram_48149e66:
    puVar1 = (undefined4 *)FUN_ram_48149c74(param_1,param_2);
  }
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_ram_4813956e(0xf);
    if (puVar1 == (undefined4 *)0x0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xffffffff;
    }
    uVar4 = param_2[2];
    uVar3 = *param_2;
    uVar2 = param_2[1];
    puVar1[4] = param_2[3];
    puVar1[1] = uVar3;
    puVar1[2] = uVar2;
    puVar1[3] = uVar4;
    uVar3 = param_2[4];
    *(undefined1 *)(puVar1 + 7) = 0;
    *(char *)(puVar1 + 5) = (char)uVar3;
    puVar1[6] = 0x200;
    pcVar5 = *(code **)(param_1 + 0xf4);
    *puVar1 = *(undefined4 *)(param_1 + 0xd0);
    *(undefined4 **)(param_1 + 0xd0) = puVar1;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(param_1,param_2,1);
    }
    FUN_ram_481499d0(param_1,puVar1,0x83);
    FUN_ram_48149924(puVar1,500);
  }
  *(char *)(puVar1 + 7) = *(char *)(puVar1 + 7) + '\x01';
  return 0;
}


