using System;
namespace AnimatingViews
{
    public class Plant
	{
		private string name;
		private double heatTolerance;
		private double waterNeededPerM3;
		private int favorableSeason;
		public Plant(string n, double h, double w, int f)
		{
			name = n;
			heatTolerance = h;
			waterNeededPerM3 = w;
			favorableSeason = f; // 1 = winter, 4 = fall
		}
		public string Name { get { return name; } set { name = value; } }

		public double getHeatTolerance()
		{
			return heatTolerance;
		}
		public double getWaterNeededPerM3()
		{
			return waterNeededPerM3;
		}
		public int getFavorableSeason()
		{
			return favorableSeason;
		}

	}
}
