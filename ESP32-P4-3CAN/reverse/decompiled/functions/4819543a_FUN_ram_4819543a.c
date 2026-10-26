/* Firmware entry: 0x4819543a */

uint * FUN_ram_4819543a(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_481953ce(&DAT_ram_4ff6d634);
  uVar1 = param_1 + 0x10;
  if (uVar1 < 8) {
    uVar1 = 8;
  }
  uVar6 = uVar1 + 0xf & 0xfffffff0;
  puVar5 = &DAT_ram_4ff6d638;
  uVar1 = DAT_ram_4ff6d638;
  do {
    puVar2 = (uint *)0x0;
    if (uVar1 == 0) {
LAB_ram_4819549a:
      FUN_ram_48195404(&DAT_ram_4ff6d634);
      return puVar2;
    }
    puVar2 = (uint *)*puVar5;
    uVar1 = *puVar2;
    if (uVar6 <= uVar1) {
      puVar3 = (uint *)puVar2[1];
      if (uVar1 - uVar6 < 8) {
        *puVar2 = uVar1;
      }
      else {
        puVar4 = (uint *)((int)puVar2 + uVar6);
        puVar4[1] = (uint)puVar3;
        puVar2 = (uint *)*puVar5;
        *puVar4 = uVar1 - uVar6;
        *puVar2 = uVar6;
        puVar3 = puVar4;
      }
      *puVar5 = (uint)puVar3;
      puVar2 = puVar2 + 4;
      goto LAB_ram_4819549a;
    }
    uVar1 = puVar2[1];
    puVar5 = puVar2 + 1;
  } while( true );
}


