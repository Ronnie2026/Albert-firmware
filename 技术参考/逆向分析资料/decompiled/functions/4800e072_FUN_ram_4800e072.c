/* Firmware entry: 0x4800e072 */

undefined4 FUN_ram_4800e072(undefined4 *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint *puVar5;
  byte *pbVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 < 0x40) {
    if (((uint)(int)(char)(&DAT_ram_4ff483a1)[param_2 * 3] < 8) &&
       (puVar5 = (uint *)(&DAT_ram_4ff5a02c)[(char)(&DAT_ram_4ff483a1)[param_2 * 3]],
       puVar5 != (uint *)0x0)) {
      pcVar4 = *(code **)(puVar5[1] + 0x18);
      if (pcVar4 == (code *)0x0) {
        *param_1 = 0x58;
        return 0xffffffff;
      }
      if ((*puVar5 & 2) == 0) {
        uVar3 = (*pcVar4)((&DAT_ram_4ff483a2)[param_2 * 3]);
      }
      else {
        uVar3 = (*pcVar4)(puVar5[2]);
      }
      FUN_ram_4ff216d6(&DAT_ram_4ff6db24);
      iVar2 = param_2 * 3;
      pbVar6 = &DAT_ram_4ff483a0 + iVar2;
      bVar1 = *pbVar6;
      if ((bVar1 & 1) == 0) {
        if ((bVar1 >> 2 & 1) == 0) {
          *pbVar6 = 0;
          (&DAT_ram_4ff483a1)[iVar2] = 0xff;
          (&DAT_ram_4ff483a2)[iVar2] = 0xff;
        }
        else {
          *pbVar6 = bVar1 | 2;
        }
      }
      FUN_ram_4ff216e2(&DAT_ram_4ff6db24);
      return uVar3;
    }
  }
  *param_1 = 9;
  return 0xffffffff;
}


