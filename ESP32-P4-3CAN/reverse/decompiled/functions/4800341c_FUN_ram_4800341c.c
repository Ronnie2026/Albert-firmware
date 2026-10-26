/* Firmware entry: 0x4800341c */

void FUN_ram_4800341c(undefined4 *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47dc8,0xffffffff);
  FUN_ram_4ff20d60(param_1);
  puVar2 = (uint *)*param_1;
  uVar4 = (ushort)*puVar2;
  if ((uVar4 & 4) != 0) {
    if (puVar2[2] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("intr_alloc.c",0x326,"intr_free_for_current_cpu",&DAT_ram_481b2958);
    }
    uVar5 = puVar2[2];
    uVar3 = 0;
    do {
      uVar1 = uVar5;
      uVar5 = *(uint *)(uVar1 + 0x14);
      if (param_1[1] == uVar1) {
        if (uVar3 == 0) {
          puVar2[2] = uVar5;
        }
        else {
          *(uint *)(uVar3 + 0x14) = uVar5;
        }
        thunk_FUN_ram_4ff209c6();
        puVar2 = (uint *)*param_1;
        if (puVar2[2] == 0) goto LAB_ram_48003498;
        break;
      }
      uVar3 = uVar1;
    } while (uVar5 != 0);
    uVar4 = (ushort)*puVar2;
  }
  if ((uVar4 & 8) != 0) {
LAB_ram_48003498:
    FUN_ram_481a9ed4(*puVar2 >> 0x11 & 0x1f,0);
    puVar2 = (uint *)*param_1;
    *(ushort *)puVar2 = (ushort)*puVar2 & 0xf0f2;
    uVar5 = *(uint *)(&DAT_ram_4ff6d9c0 + (*puVar2 >> 0xe & 4));
    *(ushort *)(puVar2 + 1) = 0xff9d;
    *(uint *)(&DAT_ram_4ff6d9c0 + (*puVar2 >> 0xe & 4)) = ~(1 << (*puVar2 >> 0x11 & 0x1f)) & uVar5;
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff47dc8);
  thunk_FUN_ram_4ff209c6(param_1);
  return;
}


